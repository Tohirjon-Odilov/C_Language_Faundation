#include <stdio.h>

int Pow(int n, int m){
	if(m == 0)
		return 1;
	return n*Pow(n, m-1);
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	printf("%d",Pow(n,m));

	return 0;
}
