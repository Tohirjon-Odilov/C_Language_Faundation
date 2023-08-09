#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int n){
	if(n == 2)
		return 2;
	else if(n < 2 || n % 2 == 0)
		return false;
	else{
		double num = sqrt(n);
		for
	}

	for(int i = 1; i <= n; i++){
		if(!(i%n)){
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	scanf("%d", &n);
	if(isprime(n)){
		puts("true");
	}else{
		puts("false");
	}

	return 0;
}
