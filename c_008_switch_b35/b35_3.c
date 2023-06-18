#include <stdio.h>

int main()
{

	int num;

	printf("Oylarni sonlarda kiriting: ");
	scanf("%d", &num);

	switch(num){
		case 12: case 1 ... 2: printf("Qish"); break;
		case 3 ... 5: printf("Bahor"); break;
		case 6 ... 8: printf("Yoz"); break;
		case 9 ... 11: printf("Kuz"); break;
		default: printf("Xato!");
	}

	return 0;

}
