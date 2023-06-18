#include <stdio.h>

int main(){

	int num,b,o,y,m,ml;

	printf("5 xonali sonlar kiriting: ");
	scanf("%d", &num);

	ml = num % 10;
	m = num / 10 % 10;
	y =  num / 100 % 10;
	o = num / 1000 % 10;
	b = num / 10000;
	num = ml * 10000 + m * 1000 + y * 100 + o * 10 + b;

	printf("%d",num);

	return 0;

}
