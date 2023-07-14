#include <stdio.h>

int main()
{
	int n, a = 0, b = 0;
	scanf("%d", &n);
	for(int i = 0; i < 6; i++, n /= 10){
		if(i < 3) a += n % 10;
		else b += n % 10;
	}
	if(a == b) printf("YES");
	else printf("NO");

	return 0;
}
