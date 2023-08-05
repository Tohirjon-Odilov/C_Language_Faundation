#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 102 - 50;
		printf("%d ", arr[i]);
	}
}

int main()
{
	srand(time(0));
	int n;
	printf("n = "); scanf("%d", &n);
	int arr[n];
	fill_arr(arr,n);

	FILE *musbat = fopen("musbat.txt", "w");
	FILE *manfiy = fopen("manfiy.txt", "w");

	for(int i = 0; i < n; i++){
		if(arr[i] > 0) fprintf(musbat, "%d ", arr[i]);
		else if(arr[i] < 0) fprintf(manfiy, "%d ", arr[i]);
	}

	fclose(musbat);
	fclose(manfiy);

	return 0;
}
