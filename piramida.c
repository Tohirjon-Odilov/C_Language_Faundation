#include <stdio.h>

int main()
{
#if 1

	int n;
	scanf("%d", &n);
	int l = n, r = n;

	for(int i = 1; i < n; i++){
		for(int j = 1; j < n*2; j++){
			if(j <= l && j >= r)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		l++;
		r--;
	}





















#endif


#if 0
	int n;
	scanf("%d", &n);
	int l = n, r = n;

	for(int i = 1; i < n; i++){
		for(int j = 1; j < n*2; j++){
			if(j >= l && j <= r){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
		l--;
		r++;
	}
#endif
	return 0;
}
