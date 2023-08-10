#include <stdio.h>
#include <stdlib.h>

int main()
{
	int j,i,k;
	int z = 1;
	int n; //size
	printf(">> "); scanf("%d", &n);
	puts("");
	for(i = 1; i <= n; i++){
		for(j = n-1; j >= i; j--){
			printf(" ");
		}
		for(k = i - 1; k >= -(i-1); k--){
			printf("*");
		}
//		z += 2;
		printf("\n");
	}

	return 0;
}
