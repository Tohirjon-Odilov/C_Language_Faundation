#include <stdio.h>

int main(){

	int num,b,o;

        printf("2 xonali son kiriting: ");
        scanf("%2d", &num);

        b = num % 10;
        o = num / 10;

        if(o==0){
          printf("No'l ");
        }else if(o==1 || b==1){
          printf("O'n ");
	  if(b==1){
//	   prinf("");
	  }
        }else if(o==2){
          printf("Yigirma ");
        }else if(o==3){
          printf("O'ttiz ");
        }else if(o==4){
          printf("Qirq ");
        }else if(o==5){
          printf("Ellik ");
        }else if(o==6){
          printf("Oltmish ");
        }else if(o==7){
          printf("Yetmish ");
        }else if(o==8){
          printf("Sakson ");
        }else if(o==9){
          printf("To'qson ");
        }else{
          printf("Manfiy son kiritdingiz!");
        }


	return 0;

}
