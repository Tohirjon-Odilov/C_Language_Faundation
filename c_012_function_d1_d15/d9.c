#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return false;
		}
		return true;
	}
}

int nextPrimeNumber(int n){
	while(1){
		n++;
		if(isPrime(n))
			return n;
	}
}


int main(){
	int a;

	printf("a = "); scanf("%d",&a);
	printf("%d\n", nextPrimeNumber(a));

	return 0;
}
