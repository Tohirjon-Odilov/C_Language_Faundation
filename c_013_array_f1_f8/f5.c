#include <stdio.h>

int main(){

	int nums[10];
	int size = sizeof(nums) / sizeof(nums[0]);

	for(int i = 0; i < size; i++){
		printf("Son kiriting: "); scanf("%d", &nums[i]);
	}

	for(int i = 0; i < size; i++){
		if(nums[i] == 5)
			printf("%d - index'da 5 bor.\n", i);
	}

	return 0;
}
