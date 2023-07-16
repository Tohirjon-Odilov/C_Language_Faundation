#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n;
	scanf("%d", &n);
	int arr[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = rand() % 10;
			printf("%d ", arr[i][j]);
		}
		puts("   ");
	}
	puts("");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == 0){
				for(int a = j; a >= 0; a--){
					if(n-1 == j)printf("%d ",arr[i][a]);
				}
			}else if(i == n-1){
				for(int a = j; a >= 0; a--){
					if(n-1 == j)printf("%d ", arr[i][a]);
				}
			}else{
				for(int a = 0; a <= j; a++){
					if(n-1 == j) printf("%d ", arr[i][a]);
					if(a == j){
						if(a==1)continue;
						printf("\n");
					}
				}
			}
		}
	}

	return 0;
}
