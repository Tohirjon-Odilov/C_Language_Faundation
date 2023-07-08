#include <stdio.h>

int main(){

	int nums[] = {5, -4, 34, 60 , 54, -77, 80, -92};
	int total = 0;

	int size = sizeof(nums) / sizeof(nums[0]);
	for(int i = 0; i < size; i++){
		total += nums[i];
	}

	printf("%d\n", total);

	return 0;
}
