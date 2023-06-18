#include <stdio.h>

int main()
{

	/*int a = 9;

	//karra jadvali

	printf("%d * %2d = %2d\n", a, 1, a*1);
	printf("%d * %2d = %2d\n", a, 2, a*2);
	printf("%d * %2d = %2d\n", a, 3, a*3);
	printf("%d * %2d = %2d\n", a, 4, a*4);
	printf("%d * %2d = %2d\n", a, 5, a*5);
	printf("%d * %2d = %2d\n", a, 6, a*6);
	printf("%d * %2d = %2d\n", a, 7, a*7);
	printf("%d * %2d = %2d\n", a, 8, a*8);
	printf("%d * %2d = %2d\n", a, 9, a*9);
	printf("%d * %2d = %2d\n", a, 10, a*10);*/

	// 3 xonali sonlarni ajratish

	// int a = 2147483648;
	// printf("Birlar xonasi %d\n", a%10);
	// printf("O'nlar xonasi %d\n", a/10%10);
	// printf("Yuzlar xonasi %d\n", a/100);

	// oshib borish tarzida * yulduzcha chiqarish

	//char belgi = '*';
	//printf("\n%c\n", belgi);
	//printf("%c %c\n", belgi, belgi);
	//printf("%c %c %c\n", belgi,belgi,belgi);
	//printf("%c %c %c %c\n", belgi, belgi, belgi, belgi);

	// 4xonali sonlarni  ajratish

//	int a = 4321;
//	printf("Birlar xonasi %d\n", a % 10);
//	printf("O'nlar xonasi %d\n", a / 10 % 10);
//	printf("Yuzlar xonasi %d\n", a / 100 % 10);
//	printf("Minglar xonasi %d\n", a / 1000);

	//To'g'ri to'rtburchakning 2 ta tomoni int a=5 va int b=10 ga teng. Shu to'rtburchakning perimetrini toping
	//A12

//	int width = 5;
//	int height = 2;
//	printf("%d\n",2*(width+height));

	//3 ta haqiqiy son saqlaydigan ozgaruvchini elon qiling va qimmat bering. Shu sonlarning o'rta arifmetigini toping
	//A13

//	int a = 192;
//	int b = 298;
//	int c = 45;

//	printf("%d\n", (a+b+c)/3);

	//A14  sonlarni o'sib borish tartibida yangi qatorda chiqarish
//	int a = 1;
//	printf("%d\n", a);
//	printf("%d %d\n", a, a+1);
//	printf("%d %d %d\n", a, a+1, a+2);
//	printf("%d %d %d %d\n", a, a+1, a+2, a+3);
//	printf("%d %d %d %d %d\n", a, a+1, a+2, a+3,a+4);

	//A15 int month = 29. Siz esa to'liq necha yil o'tganini chiqaring.

	int month = 29;
	printf("%d yil\n", month/12);

	//A16 o'zgaruvchilarning qiymatlarini almashtirish
//	int a = 3;
//	int b = 4;

//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("a = %d\nb = %d\n", a,b);

	//A17 int month= 29. Siz esa yil bo'lishga yetmay qolgan oylar sonini toping.
	int month2 = 29;
	printf("%d oy\n", month2%10);

	return 0;
}
