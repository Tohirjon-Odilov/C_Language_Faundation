#include <stdio.h>

int Ekub(int a, int b){
	if(a>b)Ekub(a-b,b);
	else if (a<b)Ekub(a,b-a);
	else if(a == b)return a;
	else if(a == 1 || b == 1) return 1;
}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);

	printf("%d",Ekub(a,b));

	return 0;
}
