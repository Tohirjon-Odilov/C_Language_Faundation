#include <stdio.h>

int main(){

	int num,b,o,y,m,ml,mll,mr,mrr,tr;

	printf("9 xonali son kiriting: ");
	scanf("%d", &num);

	tr = num % 10;
	mrr = num / 10 % 10;
	mr = num / 100 % 10;
	mll = num / 1000 % 10;
	ml = num / 10000 % 10;
	m = num / 100000 % 10;
	y = num / 1000000 % 10;
	o = num / 10000000 % 10;
	b = num % 100000000;
	num = tr * 100000000 + mrr * 10000000 + mr * 1000000 + mll * 100000 + ml * 10000 + m * 1000 + y * 100 + o * 10 + b;

	printf("%d", num);


	return 0;

}
