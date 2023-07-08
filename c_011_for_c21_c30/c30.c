#include <stdio.h>

int main()
{
	int a,b;

	printf("A < B\n");
	printf("A = "); scanf("%d", &a);
	printf("B = "); scanf("%d", &b);

	for(int i = a, count = 0; i < b && count < 3; i++ ){
		if(!(i % 2)){
			printf("%d ", i);
			count++;
//			if(count >= 3)
//				break;
		}
	}

	return 0;
}
