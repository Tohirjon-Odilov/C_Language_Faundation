#include <stdio.h>

int main()
{
	int n = 123;
	int m = 0;

	while(n != 0){
		m = m * 10+n%10;
		n/=10;
	}

	while(m != 0){
		printf("%d ", m%10);
		m/=10;
	}

	return 0;
}
