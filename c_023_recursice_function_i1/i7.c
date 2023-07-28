#include <stdio.h>

int room(int n, int r){
	if(n == 0 && r == 0) return 1;
	if(n > 0)
		room(n/10, ++r);
	if(n == 0)
		return r;
}

int main()
{
	int n, r;
	scanf("%d", &n);

	printf("%d",room(n, r));

	return 0;
}
