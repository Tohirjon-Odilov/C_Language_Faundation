#include <stdio.h>
#include <math.h>

int main(){

	int a,b,c,x1,x2,d;

	printf("a,b va c ni kiriting: ");
	scanf("%d %d %d", &a,&b,&c);
	d = b*b-4*a*c;
	x1 = (-b+sqrt(d))/(2*a);
	x2 = (-b-sqrt(d))/(2*a);
	printf("x1 = %d\nx2 = %d", x1,x2);

	return 0;

}
