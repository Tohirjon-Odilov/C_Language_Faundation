#include <stdio.h>

int main(){

	int num,b,o,y,m,ml,mll;

	printf("6 xonali son kiriting: ");
	scanf("%d", &num);

	mll = num % 10;
	ml = num / 10 % 10;
	m = num / 100 % 10;
	y = num / 1000 % 10;
	o = num / 10000 % 10;
	b = num / 100000;
	num = mll * 100000 + ml * 10000 + m * 1000 + y * 100 + o * 10 + b;

	printf("%d", num);

	return 0;

}
