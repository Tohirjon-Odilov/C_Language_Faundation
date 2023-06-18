#include <stdio.h>

int main(){

	int num,b,o;

	printf("2 xonali son kiriting: ");
	scanf("%2d", &num);

	b = num % 10;
	o = num / 10;

        if(o==0){
          printf("No'l ");
        }else if(o==1){
          printf("O'n ");
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
        }

	if(b==0){
          printf("\n");
        }else if(b==1){
          printf("bir\n");
        }else if(b==2){
          printf("ikki\n");
        }else if(b==3){
          printf("uch\n");
        }else if(b==4){
          printf("to'rt\n");
        }else if(b==5){
          printf("besh\n");
        }else if(b==6){
          printf("olti\n");
        }else if(b==7){
          printf("yetti\n");
        }else if(b==8){
          printf("sakkiz\n");
        }else if(b==9){
          printf("to'qqiz\n");
        }else{
          printf("Manfiy son kiritdingiz!\n");
        }

	return 0;

}
