#include<stdio.h>
#include<string.h>

int main(){

    char time[9];
    printf("Enter time: ");
    scanf("%s", time);

    int hour = 0, minut = 0, second = 0;
    int value = 0;

    for(int i = 0; time[i]; i++){
        if(time[i] != 58){
            value = value * 10 + (time[i] - 48);
        }
        else if(time[i] == 58){
            if(i == 2){
                hour = value;
            }else if(i == 5){
                minut = value;
            }
            value = 0;
        }
        if(i == 7){
            second = value;
        }
    }

    int check = 0;
    if(0 <= hour && hour <= 23){
        check++;
    }if(0 <= minut && minut <= 59){
        check++;
    }if(0 < second && second <= 59){
        check++;
    }
    
    if(check == 3){
        printf("To'g'ri\n");
    }else printf("Noto'g'ri\n");

    return 0;
}