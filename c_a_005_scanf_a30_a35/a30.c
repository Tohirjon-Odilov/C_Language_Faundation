#include <stdio.h>

int main(){

	int num,b,o,y,m;

	printf("4 xonali son kiriting: ");
	scanf("%d", &num);
	// 1234
	m = num % 10;
	y = num / 10 % 10;
	o = num / 100 % 10;
	b = num / 1000;
	num = b + o * 10 + y * 100 + m * 1000;

	printf("%d",num);

	return 0;

}
