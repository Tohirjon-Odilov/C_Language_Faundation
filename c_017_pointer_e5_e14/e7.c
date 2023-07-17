#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	puts("");
}

void ishoralarni_top(int ishoralar[], int arr[], int n){
	for(int i = 0; i < n; i++){
		if(arr[i] > 0) ishoralar[0]++;
		else if(arr[i] < 0) ishoralar[1]++;
		else ishoralar[2]++;
	}
}

int main()
{
	srand(time(0));

	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		arr[i] = rand() % 48 - 23;
	}
	output(arr,n);

	int ishoralar[3] = {};
	ishoralarni_top(ishoralar,arr,n);
	int musbatlar = ishoralar[0], manfiylar = ishoralar[1], nollar = ishoralar[2];

	int musbat[musbatlar];
	int manfiy[manfiylar];
	int noll[nollar];

	for(int i = 0, musbat_i = 0, manfiy_i = 0, nol_i = 0; i < n; i++){
		if(arr[i] > 0){
			musbat[musbat_i] = arr[i];
			musbat_i++;
		}else if(arr[i] < 0){
			manfiy[manfiy_i] = arr[i];
			manfiy_i++;
		}else{
			noll[nol_i] = arr[i];
			nol_i++;
		}
	}

	output(musbat,musbatlar);
	output(manfiy,manfiylar);
	output(noll,nollar);
	return 0;
}
