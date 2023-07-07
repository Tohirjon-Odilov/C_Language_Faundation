#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n+2];
	int s = 0;

	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

	arr[n] = arr[0];
	arr[n+1] = arr[1];

	for(int i = 1; i < n + 1; i++){
		int t = arr[i-1] + arr[i] + arr[i+1];
		if(t > s) s = t;
	}

	printf("%d ", s);
	return 0;
}
