#include <stdio.h>

void get_square(int *ptr){
	*ptr = *ptr * *ptr;
}

int main()
{
	int n;
	scanf("%d", &n);

	get_square(&n);
	printf("%d", n);

	return 0;
}
