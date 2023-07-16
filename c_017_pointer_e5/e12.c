#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int odd = n / 2, even = 0;

	odd += n % 2 ? 2 : 1;
	arr[0] = even++;

	for(int i = 0; i < n; i++){
		if(!(i % 2)) arr[i] = even++;
	}
	for(int i = 0; i < n; i++){
		if(i % 2) arr[i] = odd++;
		printf("%d ", arr[i]);
	}

	return 0;
}
