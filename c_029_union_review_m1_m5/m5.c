#include <stdio.h>

void odd(int n){
	if(n > 0){
		for(int i = n; i > 0; i--){
			if(i > 1){
				printf("%d+", n);
			}else{
				printf("%d", n);
			}
		}
		printf("=%d\n", n*n);
		odd(n-1);
	}
}

void even(int n){
	if(n > 0){
		even(n-1);
		for(int i = 0; i < n; i++){
			if(i < n-1){
				printf("%d+", n);
			}else{
				printf("%d", n);
			}
		}
		printf("=%d\n", n*n);
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	if(n%2) odd(n);
	else even(n);
	return 0;
}
