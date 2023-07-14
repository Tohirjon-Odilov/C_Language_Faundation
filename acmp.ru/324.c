#include <stdio.h>

int main()
{
	int n,a,b,c;
	scanf("%d", &n);

	for(int i = n; i > 0; i /= 100){
		if(i < 100){
			a = n/100;
		}else{
			b = n%100;
			b = b % 10 * 10 + b/10;
		}
	}

	if(a == b) printf("YES");
	else if(a != b) printf("NO");

	return 0;
}
