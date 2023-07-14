#include <stdio.h>

int main()
{
	int n, odd = 0, even = 0;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < n; i++){
		if(arr[i] % 2) odd++;
		else even++;
	}
	int count = 0, count1 = 0;
	int eva[even], oda[odd];
	for(int i = 0; i < n; i++){
		if(arr[i] % 2) {
			oda[count] = arr[i];
			count++;
		}else {
			eva[count1] = arr[i];
			count1++;
		}
	}


	for(int i = 0; i < odd; i++){
		printf("%d ", oda[i]);
	}
	puts("");
	for(int i = 0; i < even; i++){
		printf("%d ", eva[i]);
	}
	puts("");
	if(even > odd) printf("YES");
	else printf("NO");

	return 0;
}
