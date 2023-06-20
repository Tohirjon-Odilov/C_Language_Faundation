#include <stdio.h>

int main()
{

	int a,b;

	printf("Son kiriting: ");
	scanf("%d %d", &a,&b);

	do{
		if(a % 2)
			printf("%d\n", a);
		a++;
	}while(a < b);

}
