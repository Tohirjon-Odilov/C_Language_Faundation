#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void output(int *arr, int n, int m){
//	for(int q = 0; q < n; q++){
//		for(int u = 0; u < m; u++){
//			printf("%d ", arr[q][u]);
//		}
//		printf("\n");
//	}
//}
//
//void fill_arr(int *arr, int n, int m){
//	for(int q = 0; q < n; q++){
//		for(int u = 0; u < m; u++){
//			arr[q][u] = rand() % 20 - 5;
//		}
//	}
//	output((int *)arr,n,m);
//}
//
//void sum(int *arr, int n, int m){
//	int summa = 0;
//	for(int q = 0; q < n; q++){
//		for(int u = 0; u < m; u++){
//			if(arr[q][u] < 0){
//				printf("\n%d", arr[q][u]);
////				return 0;
//			}else{
//				summa += arr[q][u];
//				printf("%d", arr[q][u]);
//			}
//		}
//	}
//	printf("\nsum = %d", summa);
//}

int main()
{
	srand(time(0));
	int n,m;
	printf("Qatorlar sonini kiriting: "); scanf("%d", &n);
	printf("Ustunlar sonini kiriting: "); scanf("%d", &m);
	int arr[n][m];

	for(int q = 0; q < n; q++){
		for(int u = 0; u < m; u++){
			arr[q][u] = rand() % 25-5;
		}
	}

	for(int q = 0; q < n; q++){
		for(int u = 0; u < m; u++){
			printf("%2d ", arr[q][u]);
		}
		printf("\n");
	}

	int summa = 0, count,q,u;
	for(q = 0; q < n; q++){
		for(u = 0; u < m; u++,count++){
			if(arr[q][u] >= 0){
				summa += arr[q][u];
//				printf("bit=%d cb=%d c=%d  ",n*m*4, (count+1)*4,count+1);
				printf("%d%s", arr[q][u], n*m*4 == (count+1)*4?"":arr[q][u+1] < 0 ? "":"+");
			}else{
				printf("%s%d",arr[0][0]<0?"":"=",summa);
				return 0;
			}
		}
	}
	if(q*u == count) printf("%s%d",arr[0][0]<0?"":"=",summa);
	return 0;
}
