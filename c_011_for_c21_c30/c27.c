#include <stdio.h>

int main()
{
	int n,a = 1;
	scanf("%d", &n);

	for (int i = 1; n >= i; i++){
		a *= i;
	}
	printf("%d\n", a);
	return 0;
}
