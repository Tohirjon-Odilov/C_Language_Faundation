#include <stdio.h>

int main()
{

	int a,b,q = 0, r = 0;
	scanf("%d %d", &a,&b);

	if(a > 0 && b> 0 || a > 0 && b < 0){
		q = a / b;
		r = a - (q * b);
	}
	if(a < 0 && b > 0){
		q = a / b - 1;
		r = a - (q * b);
	}
	if(a < 0 && b < 0){
		q = a / b + 1;
		r = a - (q * b);
	}

	printf("%d", r);
    return 0;
}
