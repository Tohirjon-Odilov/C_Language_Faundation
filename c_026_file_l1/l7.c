#include <stdio.h>

int main()
{
	int arr[] = {2, 19, 54, 23, 87, 41, 69, 84, 101, 57, 32, 17};
	int n = sizeof(arr)/sizeof(arr[0]);
	int is_prime;

	FILE *fp = fopen("prime.txt", "w");

	for(int i = 0; i < n; i++){
		is_prime = 1;

		if(arr[i] <= 1)
			is_prime = 0;
		else
			for(int j = 2; j*j <= arr[i]; j++){
				if(arr[i] % j == 0){
					is_prime = 0;
					break;
				}
			}
		if(is_prime)
			fprintf(fp ,"%d ", arr[i]);
	}

	fclose(fp);

	return 0;
}
