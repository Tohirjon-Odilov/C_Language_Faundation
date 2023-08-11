#include <stdio.h>

int main()
{
	int n = 2;
	float arr[n];
	int count = 0;

	for(int i = 0; n > i; i++){
		printf("Enter float number: "); scanf("%f", &arr[i]);
		int k = arr[i];
		while(k > 0){
			k /= 10;
			++count;
		}
		count = 0;
		while(arr[i] > 0){
			arr[i] /= 10;
			arr[i] *= 100;
		}
		printf("%f\n", arr[i]);
	}



	return 0;
}
