#include <stdio.h>

void func(int n){
	if(n > 0)
		func(n-1);
	if(n % 2)
		printf("%d ",n);
}

int main()
{
	int num;
	scanf("%d", &num);

	func(num);

	return 0;
}
