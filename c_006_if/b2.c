#include <stdio.h>

int main(){

        int num;

        printf("Hafta kunlarini sonlarda kiriting: ");
        scanf("%1d", &num);

        if(num == 1){
         printf("Dushanba\n");
        }else if(num == 2){
         printf("Seshanba\n");
        }else if(num == 3){
         printf("Chorshanba\n");
        }else if(num == 4){
         printf("Payshanba\n");
        }else if(num == 5){
         printf("Juma\n");
        }else if(num == 6){
         printf("Shanba\n");
        }else if(num == 7){
         printf("Yakshanba\n");
        }else{
         printf("Bunday kun yo'q!?");
        }

        return 0;

}


