#include <stdio.h>
#include <stdlib.h>

int multiplication(int n, int m){
	if(m == 0) return m;
	return n+multiplication(n,m-1);
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	printf("%d", multiplication(n,m));

	return 0;
}
