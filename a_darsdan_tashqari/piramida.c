#include <stdio.h>

int main()
{

#if 1

	int num;
	int isTrue;

	printf("Keling piramida yasaymiz:\nRozi bo'lsez 1 ni kiriting: ");
	scanf("%d", &isTrue);

	if (isTrue == 1)
	{
		printf("5 dan katta 10 kichik son kiriting: ");
		scanf("%d", &num);
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("%d ", i + 1);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Boshqa harakat qiling!");
	}

	return 0;

#endif

#if 0

	int n;
	scanf("%d", &n);
	int l = n, r = n;

	for(int i = 1; i < n; i++){
		for(int j = 1; j < n*2; j++){
			if(j <= l && j >= r)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		l++;
		r--;
	}

#endif

#if 0
	int n;
	scanf("%d", &n);
	int l = n, r = n;

	for(int i = 1; i < n; i++){
		for(int j = 1; j < n*2; j++){
			if(j >= l && j <= r){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
		l--;
		r++;
	}
#endif
	return 0;
}
