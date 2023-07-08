#include <stdio.h>

int main()
{

	int n;
	int count = 0;
	printf("N = ");
	scanf("%d", &n);

//	for(int i = 4; i <= n; i*=4)
//	{
//		if(i == n){
//			count++;
//			break;
//		}
//	}
//	if(count)
//		printf("4 ning darajasi.\n");
//	else
//		printf("4 ning darajasi emas.\n");

	for(int i = 4; i <= n; i *= 4){
		if(n == i){
			printf("4 ning darajasi.\n");
			return 0;
		}
	}
	printf("4 darajasi emas.\n");
	return 0;
}
