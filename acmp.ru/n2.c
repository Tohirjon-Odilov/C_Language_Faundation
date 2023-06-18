#include <stdio.h>

int main (){

	int num;
	int i = 0;
	int res = 0;

	scanf("%d",&num);
	while(num > i){
		i++;
		res += i;
	}
	printf("%d", res);

	return 0;

}
