#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char matn[50];
    printf("Matnni kiriting: ");
    scanf("%[^\n]", matn);

    printf("Output:\n");
    
    int i = 0;
    bool p = true;

    while (matn[i] != '\0') {
        int start = i;
        while (matn[i] != ' ' && matn[i] != '\0') {
            i++;
        }
        int end = i - 1;

        bool has_digit = false;
        for (int j = start; j <= end; j++) {
            if (isdigit(matn[j])) {
                has_digit = true;
                break;
            }
        }

        if (has_digit) {
            for (int j = start; j <= end; j++) {
                printf("%c", matn[j]);
                p = false;
            }
            printf("\n");
        }

        if (matn[i] != '\0') {
            i++;
        }
    }
    if(p){
        printf("no number!\n");
    }

    return 0;
}