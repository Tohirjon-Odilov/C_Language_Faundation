#include <stdio.h>

int main(){

	int num,o,b;

	printf("Iltimos 2 xonali son kiriting: ");
	scanf("%2d", &num);

	o = num / 10;
	b = num % 10;

	switch(o){
		case 0: printf("No'l "); break;
		case 1: printf("O'n "); break;
		case 2: printf("Yigirma "); break;
		case 3: printf("O'ttiz "); break;
		case 4: printf("Qirq "); break;
		case 5: printf("Ellik "); break;
		case 6: printf("Oltmish "); break;
		case 7: printf("Yetmish "); break;
		case 8: printf("Sakson "); break;
		case 9: printf("To'qson "); break;

		default: printf("Xato!\n");
	}
	switch(b){
		case 1: printf("bir"); break;
		case 2: printf("ikki"); break;
		case 3: printf("uch"); break;
		case 4: printf("to'rt"); break;
		case 5: printf("besh"); break;
		case 6: printf("olti"); break;
		case 7: printf("yetti"); break;
		case 8: printf("sakkiz"); break;
		case 9: printf("to'qqiz"); break;
	}

	return 0;
}
