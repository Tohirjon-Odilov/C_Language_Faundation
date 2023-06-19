#include <stdio.h>

int main(){

	int a,b;
	int res = 0;

	printf("a = "); scanf("%d", &a);
	printf("b = "); scanf("%d", &b);

	while(a <= b){
		res += a;
		a++;
	}
	printf("%d\n", res);

	return 0;

}
