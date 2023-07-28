#include<stdio.h>

int main(){

    char text[100];
    printf("Matnni kiriting: ");
    scanf("%[^\n]s", text);

    for(int i = 0; text[i]; i++){
        if(text[i] != ' '){
            for(int j = i; text[j]; j++){
                if(text[j] != ' '){
                    printf("%c", text[j]);
                }else return 0;
            }
        }
    }

    return 0;
}