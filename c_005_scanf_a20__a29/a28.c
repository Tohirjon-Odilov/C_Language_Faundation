#include <stdio.h> 

int main(){

	int number,a,b,c;

	printf("Uch xonali son kiriting: ");
	scanf("%d", &number);

	//1 method
	printf("%d%d%d\n", number%10, number%100/10, number/100);

	//2 method
	a = number / 100;
	b = number % 100 / 10;
	c = number % 10;
	number = c * 100 + b * 10 + a;
	printf("%d\n", number);

	return 0;

}
