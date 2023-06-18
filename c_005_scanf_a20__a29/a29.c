#include <stdio.h> 

int main(){

 	int number,a,b,c;

	printf("Uch xonali son kiriting: ");
	scanf("%d", &number);

	//1 method
	printf("Kiritilgan sonning raqamlar yig'indisi %d ga teng.\n", number / 100 + number % 100 / 10 + number % 10);

	//2 method
	a = number / 100;
	b = number % 100 / 10;
	c = number % 10;
	number = a + b + c;
	printf("Kiritilgan sonning raqamlar yig'indisi %d ga teng.\n", number);
	return 0;

}
