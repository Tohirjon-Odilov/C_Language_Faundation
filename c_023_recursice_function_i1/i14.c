#include <stdio.h>

void previus_num(int n, int m){
	if(n >= m){
		printf("%d ", n);
		previus_num(n-1,m);
	}

}

int main()
{
	int n,m;
	scanf("%d %d", &n, &m);

	previus_num(n,m);

	return 0;
}
