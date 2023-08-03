#include <stdio.h>
#include <stdlib.h>

void Remainder(int n, int m){
	if(m == 0){
		printf("Bo'luvchini bo'linmadan kattaroq kiriting");
		exit(0);
	}
	if(n > m){
		Remainder(n-m, m);
	}
	if(n < m) printf("%d", n);
}

int main()
{
	int n,m;
	scanf("%d %d", &n, &m);

	Remainder(n,m);

	return 0;
}
