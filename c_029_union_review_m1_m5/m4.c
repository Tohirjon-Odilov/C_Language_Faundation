#include <stdio.h>
#include <stdlib.h>

void odd(int n){

	if(n > 0){
		odd(n-1);
	}
	if(n % 2)
		printf("%d ", n);

}

int main()
{
	int n;
	scanf("%d", &n);

	odd(n);

	return 0;
}
