#include <stdio.h>

void print_num(int n, int m){
	if(n <=  m){
		printf("%d ", n);
		print_num(n+1, m);
	}
}

int main()
{
	int n,m;
	scanf("%d %d", &n,&m);

	print_num(n,m);

	return 0;
}
