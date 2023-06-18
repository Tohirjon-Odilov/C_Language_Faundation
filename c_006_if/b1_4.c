#include <stdio.h>

int main(){

	int a,b,c,num;

	printf("Uchta butun son kiriting: ");
	scanf("%d%d%d", &a,&b,&c);

	//1-method
	/*if(a > 0 && b > 0 && c > 0){
	  num += 3;
	}else if(a > 0 && b > 0){
	  num += 2;
	}else if(a > 0 && c > 0){
	  num += 2;
	}else if(b > 0 && c > 0){
	  num += 2;
	}else if(a < 0 && b < 0){
	  ++num;
	}else if(a < 0 && c < 0){
	  ++num;
	}else if(b < 0 && c < 0){
	  ++num;
	}
	else{
	  printf("Siz faqat butun son kiritdingiz!?\n");
	}*/

	//2-method
	if(a > 0){++num;}
	if(b > 0){++num;}
	if(c > 0){++num;}
	if(num == 0){
	 printf("Siz faqat manfiy son kiritdingiz!?");
	}else{
	 printf("%d ta butun son mavjud.", num);
	}
	return 0;

}
