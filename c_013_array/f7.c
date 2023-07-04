#include <stdio.h>

int main(){

	int nums[10];
	int j = 0;
	int t = 0;

	for(int i = 0; i < 10 ; i++){
		printf("Son kiriting: "); scanf("%d", &nums[i]);
	}

	for(int i = 0; i < 10; i++){
		if(!(nums[i] % 2))
			j += nums[i];
		else
			t += nums[i];
	}
	printf("%d - %d = %d\n", t,j,t-j );


	return 0;
}
