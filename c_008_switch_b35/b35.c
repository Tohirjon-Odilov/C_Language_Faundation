#include <stdio.h>

int main()
{

	int num;

	printf("Son kiriting: ");
	scanf("%d", &num);

	switch(num){
	case 1:
		printf("Dushanba\n");
		break;
	case 2:
		printf("Seshanba\n");
		break;
	case 3:
		printf("Chorshanba\n");
		break;
	case 4:
		printf("Payshanba\n");
		break;
	case 5:
		printf("Juma\n");
		break;
	case 6:
		printf("Shanba\n");
		break;
	case 7:
		printf("Yakshanba\n");
		break;
	default:
		printf("Bunday hafta mavjud emas");
	}

	return 0;

}
