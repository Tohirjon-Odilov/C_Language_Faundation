#include <stdio.h>
#include <string.h>

int main() {
    char input[1001];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int len = strlen(input);
    int open_tag = 0;
    int close_tag = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '<' && input[i + 1] != '>') {
            open_tag = 1;
        } else if (input[i] != '<' && input[i + 1] == '>') {
            close_tag = 1;
        }
        if (input[0] == '<') {
            open_tag = 1;
        }
        if(strlen(input)== '>') {
            close_tag = 1;
        }
    }

    if (open_tag && close_tag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    // printf("%d\n",open_tag);
    // printf("%d\n",close_tag);

    return 0;
}
