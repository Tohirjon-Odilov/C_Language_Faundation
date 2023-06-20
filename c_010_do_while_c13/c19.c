#include <stdio.h>

int main()
{

	int num;
	int i = 1;

	printf("Son kiriting: ");
	scanf("%d", &num);

	if(num > 0){
		do{
			num /= 10;
		}while(num >= 10);
		printf("salom %d\n", num);
	}else{
		printf("Siz manfiy son kiritdingiz!!!");
	}

	return 0;

}
