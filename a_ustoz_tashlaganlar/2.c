#include <stdio.h>

int main()
{
	int n, sum;
	int count = 0;
	int i = 0;

	printf("Son kiriting: ");
	scanf("%d", &n);

	while(n > 0)
	{
		sum = n % 10;
		while(n > i){
			if(sum % i)
				count++;
			i++;
		}
		n /= 10;
	}
	printf("%d", count);

	return 0;
}
