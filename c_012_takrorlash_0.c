#include <stdio.h>

int main()
{
	int num;
	int isTrue;

	printf("Keling piramida yasaymiz:\nRozi bo'lsez 1 ni kiriting: "); 
	scanf("%d", &isTrue);

	if(isTrue == 1){
		printf("5 dan katta 10 kichik son kiriting: ");
		scanf("%d", &num);
		for(int i = 0; i < num; i++){
			for(int j = 0; j <= i; j++){
				printf("%d ", i+1);
			}
			printf("\n");
		}
	}else{
		printf("Boshqa harakat qiling!");
	}

	return 0;
}
