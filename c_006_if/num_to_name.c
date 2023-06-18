#include <stdio.h>

int main(){

	int num;

	printf("Raqam kiriting: ");
	scanf("%d", &num);

	if(num==0){
	  printf("no'l\n");
	}else if(num==1){
	  printf("bir\n");
	}else if(num==2){
	  printf("ikki\n");
	}else if(num==3){
	  printf("uch\n");
	}else if(num==4){
	  printf("to'rt\n");
	}else if(num==5){
	  printf("besh\n");
	}else if(num==6){
	  printf("olti\n");
	}else if(num==7){
	  printf("yetti\n");
	}else if(num==8){
	  printf("sakkiz\n");
	}else if(num==9){
	  printf("to'qqiz\n");
	}else{
	  printf("Manfiy son kiritdingiz!");
	}

	return 0;

}
