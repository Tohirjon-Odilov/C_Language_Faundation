#include <stdio.h>

int main(){

	int number,b,q;

	printf("Ikki xonali son kiriting: ");
	scanf("%d", &number);

	//1 method
	printf("%d%d\n", number % 10, number / 10);

	//2 method
 	b = number / 10;
	q = number % 10;
	number = q * 10 + b;
	printf("%d", number);

	return 0;

}
