#include <stdio.h>

void func(int n){
	if(!(n % 2))
		printf("%d ", n);
	if(n > 1)
		func(n-1);
}

int main()
{
	int n;
	scanf("%d", &n);
	func(n);

	return 0;
}
