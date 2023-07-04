#include <stdio.h>

int main(){

	int nums[10];

	for(int i = 0; i < 10; i++){
		printf("Son kiriting: "); scanf("%d", &nums[i]);
	}
	for(int i = 0; i < 10; i++){
		if(!(nums[i] % 2)){
			printf("%d * 2 = %d\n", nums[i], nums[i] * 2);
		}
		else{
			printf("%d - 2 = %d\n", nums[i], nums[i] - 2);
		}
	}

	return 0;
}
