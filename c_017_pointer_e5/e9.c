#include <stdio.h>

int main()
{

	long long int n;
	const long long int base = 2;
	scanf("%lld", &n);

	if(n == 1){
		printf("1");
		return 0;
	}
	long long int n1 = n;
	long long int res = 20;
	while (n1 >= base){
		res = (res + n1 % 2) * 10;
		n1 /= base;
	}

	res++;

//	printf("res: %lld\n", res);
	int res1 = 0;
	while(res > 0){
		res1 = (res1 + res % 10) * 10;
		res /= 10;
	}
	res1 /= 100;

	printf("res1 = %d\n", res1);
//	printf("res = %llb", n);

	return 0;
}
