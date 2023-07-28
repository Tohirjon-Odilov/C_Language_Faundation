#include <stdio.h>
#include <stdlib.h>

int nth_fibonachi(int n, int nth, int f0, int f1){
	if(f1 == 0){
		return f0;
	}else if(n == 1){
		return f1;
	}
	if(n==nth){
		return f0 + f1;
	}
	return nth_fibonachi(n,nth+1,f1,f0+f1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", nth_fibonachi(n,2,0,1));

	return 0;
}
