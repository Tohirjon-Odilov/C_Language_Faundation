#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	int summa = 0, count = 0;
	for(int q = 0; q < n; q++){
		for(int u = 0; u < m; u++,count++){
			if(arr[q][u] >= 0){
				summa += arr[q][u];
				printf("%d%s", arr[q][u], n*m*4 == (count+1)*4?"":arr[q][u+1] < 0 ? "":"+");
			}else{
				printf("%s%d",arr[0][0]<0?"":"=",summa);
				return 0;
			}
		}
	}
	if(n*m == count) printf("%s%d",arr[0][0]<0?"":"=",summa);
	return 0;
}
