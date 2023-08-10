#include <stdio.h>

void odd(int n, int i){
	if(n % 2){
		if(n > 1)
			odd(n-1,i+1);

		if(n % 2){
			printf("\b= %d\n", n);
		}
	}else{
		if(n % 2){
			printf("\b= %d\n", n);
		}
		if(n > 1)
			odd(n-1,i+1);
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	odd(n,0);

	return 0;
}
