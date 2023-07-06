#include <stdio.h>

int main(){

	int nums[10];
	int j = 0, t = 0;

	for(int i = 0; i < 10 ; i++){
		printf("%d son kiriting: ", i); scanf("%d", &nums[i]);
	}

	for(int i = 0; i < 10; i++){
		if(i % 2 == 0)
			j += nums[i];
		else
			t += nums[i];
	}
	printf("%d - %d = %d\n", t,j,t-j );


	return 0;
}
