#include <stdio.h>

int main()
{

	int num;

	printf("Son kiriting: ");
 	scanf("%d", &num);

	switch(num){
		case 1:
			printf("Yomon\n");
			break;
		case 2:
			printf("Qoniqarsiz\n");
			break;
		case 3:
			printf("Qoniqarli\n");
		case 4:
			printf("Yaxshi\n");
			break;
		case 5:
			printf("A'lo\n");
			break;
		default:
			printf("Xato");
	}

	return 0;

}
