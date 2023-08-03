#include <stdio.h>

int digit(int n){
	if(n > 9)
		digit(n/10);
	printf("%d ", n%10);
}

int main()
{
	int n;
	scanf("%d", &n);

	digit(n);

	return 0;
}
