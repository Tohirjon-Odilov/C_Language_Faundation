#include<stdio.h>
#include<string.h>

int main(){

    char date[11];
    printf("Enter date: ");
    scanf("%s", date);

    int day = 0, month = 0, year = 0;
    int value = 0;

    for(int i = 0; date[i]; i++){
        if(date[i] != 46){
            value = value * 10 + (date[i] - 48);
        }
        else if(date[i] == 46){
            if(i == 2){
                day = value;
            }else if(i == 5){
                month = value;
            }
            value = 0;
        }
        if(i == 9){
            year = value;
        }
    }

    int check = 0;
    if(1 <= day && day <= 31){
        check++;
    }if(1 <= month && month <= 12){
        check++;
    }if(0 < year && year <= 2023){
        check++;
    }
    
    if(check == 3){
        printf("To'g'ri\n");
    }else printf("Noto'g'ri\n");

    return 0;
}