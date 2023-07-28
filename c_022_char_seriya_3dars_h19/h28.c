#include<stdio.h>

int main(){

    char text[100];
    printf("Matnni kiriting: ");
    scanf("%[^\n]s", text);

    int check = 0, j, h;
    for(int i = 0; text[i]; i++){
        if(text[i] != ' '){
            if(check == 0){    
                for(j = i; text[j]; j++){
                    if(text[j] == ' '){
                        check = 1;
                        break;
                    }
                }
            }
            if(check == 1){
                for(h = j+1; text[h]; h++){
                    if(text[h] != ' ' && text[h+1] != '\0'){
                        printf("%c", text[h]);
                    }
                    else if(text[h+1] == '\0'){
                        printf("%c", text[h]);
                        return 0;
                    }
                    else return 0;
                }
            }
        }
    }

    return 0;
}