#include <stdio.h>

int main()
{
	int a, i = 0;
	int res = 0;

	printf("Son kiriting: ");
	scanf("%d", &a);

#if 0 // 1 // 0 dan a gacha bo'lgan sonlarni yig'indisini chiqarish

	while(a >= i){
		res += i;
		i++;
	}
	printf("Sonlar yig'indisi: %d", res);

#endif
#if 0 // 2 // 0 dan a gacha bo'lgan sonlarni faqat juftlarini yig'indisini chiqarish

	while(a >= i){
		res += i;
		i += 2;
	}
	printf("Faqat juftlarning yig'indsi: %d", res);

#endif
#if 0 // 3
	i = 1;

	while(a >= i){
		res += i;
		i += 2;
	}
	printf("Faqat toqlarning yig'indisi: %d", res);

#endif
#if 0 // 4

	while(a >= i){
		res += i;
		i+=5;
		printf("");
	}
	printf("Faqat 5 bo'lingandagi sonlar yig'indisi: %d", res);

#endif
#if 1 // 5

	while(a > i){
		res++;
		i += 2;
	}
	printf("Juft sonlar soni: %d", res);

#endif
#if 0 // 6

	while(a >= i){
		if
	}

#endif
	return 0;

}
