#include <stdio.h>

int main()
{
	int n, index;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	scanf("%d", &index);

	int y, x = 0, min, res;
	if(n < index){
		res = arr[n-1];
		x += ++res;
	}
	else{
		res = arr[index - 1];
		x += ++res;
	}

	for(int i = 0; i < n; i++){
		if(arr[i] == res){//2 < 4
//			puts("1 if");
//			printf("x = %d", x);
			for(int j = i + 1; j < x; j++ ){
//				printf("kirmadi %d %d", j, x);
				min = arr[j];
				if(min > arr[res--]){
					min = arr[res];
//					puts("salom");
				}
//				else min = arr[j];
			}
			res = min;
		}else{
			printf("else %d\n", res);
		}
	}


//	printf("tashqi %d", res);


	return 0;
}
