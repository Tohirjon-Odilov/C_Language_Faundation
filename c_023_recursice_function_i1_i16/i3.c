#include <stdio.h>

void times(int n, int i){
//	i++;
	printf("%d * %d = %2d", n, i, n * i);
	puts("");
	if(i < 10)
		times(n, i++);
}

int main()
{
	int n;
	scanf("%d", &n);

	times(n, 1);

	return 0;
}
