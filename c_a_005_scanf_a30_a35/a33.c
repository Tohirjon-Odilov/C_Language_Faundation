#include <stdio.h>

int main(){

	int num,b,o,y,m,ml,mll,mr;

	printf("7 xonali son kiriting: ");
	scanf("%d", &num);

	mr = num % 10;
	mll = num / 10 % 10;
	ml = num / 100 % 10;
	m = num / 1000 % 10;
	y = num / 10000 % 10;
	o = num / 100000 % 10;
	b = num / 1000000;
	num = mr * 1000000 + mll * 100000 + ml * 10000 + m * 1000 + y * 100 + o * 10 + b;

	printf("%d", num);

	return 0;

}
