#include <stdio.h>

int main(){

	int i = 1, res = 0;
	int num;

	printf("Son kiriting: ");
	scanf("%d", &num);

	while(i <= 10){
		res = num * i;
		printf("%d * %2d = %2d\n", num, i, res);
		i++;
	}

	return 0;

}
