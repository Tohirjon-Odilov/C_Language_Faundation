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
			arr[i][j] = rand() % 20-9;
			printf("%2d ", arr[i][j]);
		}
		puts("   ");
	}
	puts("");
	int j = n-1;
	int diagonal[n];
	int teskari_diagonal[n];
	for(int q = 0,i = 0,ii=0; q < n; q++){
		for(int u = 0, j = 0,jj=0; u < n; u++){
			if(q == u){
				diagonal[i] = arr[q][u];
				arr[q][u] = teskari_diagonal[i];
				printf("%2d ", arr[q][u]);
				i++;
			}else if(q+u == n-1){
				teskari_diagonal[ii] = arr[q][u];
				arr[q][u] = diagonal[ii];
				printf("%2d ", arr[q][u]);
				ii++;
			}
else printf("%2d ",arr[q][u]);
		}
		puts("");
	}

//	for(int q = 0,i = 0,ii=0; q < n; q++){
//		for(int u = 0, j = 0,jj=0; u < n; u++){
//			if(q == u){
//			diagonal[i][j] = arr[q][u];
//				arr[q][u] = teskari_diagonal[i][j];
//				printf("%2d ", teskari_diagonal[q]);
//				i++;j++;
//			}else if(q+u == n-1){
//				teskari_diagonal[ii][jj] = arr[q][u];
//				arr[q][u] = diagonal[ii][jj];
//				printf("%2d ", diagonal[q]);
//				ii++;jj++;
//			}else printf("%2d ",arr[q][u]);
//		}
//		puts("");
//	}

//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < n; j++){
//			if(i == 0){
//				for(int a = j; a >= 0; a--){
//					if(n-1 == j)printf("%d ",arr[i][a]);
//				}
//			}else if(i == n-1){
//				for(int a = j; a >= 0; a--){
//					if(n-1 == j)printf("%d ", arr[i][a]);
//				}
//			}else{
//				for(int a = 0; a <= j; a++){
//					if(n-1 == j) printf("%d ", arr[i][a]);
//					if(a == j){
//						if(a==1)continue;
//						printf("\n");
//					}
//				}
//			}
//		}
//	}

	return 0;
}
