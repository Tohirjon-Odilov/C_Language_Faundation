#include <stdio.h>

void change_place(int *num){
	int first_n = *num / 10;
	*num = *num % 10;
	*num = *num * 10 + first_n;
}

int main()
{
	int n;
	printf("Ikki xonali son kiriting: "); scanf("%2d", &n);

	change_place(&n);
	printf("%d", n);

	return 0;
}
