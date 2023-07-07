#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	int l,r;
	scanf("%d %d", &l, &r);

	int max = a[l - 1], max_index = l - 1;

	for (int i = l; i < r; i++){
		if(max < a[i]){
			max = a[i];
			max_index = i;
		}
	}

	printf("%d %d", max, max_index + 1);
	return 0;
}

