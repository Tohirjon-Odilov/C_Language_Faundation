#include <stdio.h>

int sumDigit(int n, int sum){
	if(n > 0){
		sum += n%10;
		sumDigit(n/10, sum);
	}
	if(n == 0)
		return sum;
}

int main()
{
	int n, sum;
	scanf("%d", &n);

	printf("%d",sumDigit(n, sum));

	return 0;
}

