#include <stdio.h>

int main(){

	int nums[] = {4, -7, 5, -8, 6, -9, 0, 6, 0, -3, 0, 0, 0};

	for(int i = 0; i < 13; i++){
		if(nums[i] != 0)
			printf("%d\n", nums[i]);
	}

	return 0;
}
