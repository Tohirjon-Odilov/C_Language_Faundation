#include <stdio.h>

int main()
{
	int n=10;
	int nums[n];
	int i = 0, j = 0;
	FILE *fp = fopen("l5.txt", "r");

	while(fscanf(fp, "%d", &nums[i++]) != EOF){}

	for(int i = n-1; i > 0; i--){
		if(!(nums[i] % 2))
			printf("%d ",nums[i]);
	}

	return 0;
}
