#include <stdio.h>

void digit(int n){
	if(n > 0){
		printf("%d", n%10);
		digit(n/10);
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	digit(n);

	return 0;
}
