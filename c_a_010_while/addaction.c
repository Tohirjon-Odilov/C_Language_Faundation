#include <stdio.h>

int main()
{
	int a, i = 1;
	int res = 0;

	printf("Son kiriting: ");
	scanf("%d", &a);

#if 0 // 1 dan a gacha bo'lgan sonlarni yig'indisini chiqarish

	while(a >= i){
		res += i;
		i++;
	}
	printf("Sonlar yig'indisi: %d", res);

#endif
#if 0 //1 dan a gacha bo'lgan sonlarni faqat juftlarini yig'indisini chiqarish

	while(a >= i){
		if(!(i%2))
			res += i;
		i++;
	}
	printf("Faqat juftlarning yig'indsi: %d", res);

#endif
#if 0

	while(a >= i){
		if(i % 2)
			res += i;
		i++;
	}
	printf("Faqat toqlarning yig'indisi: %d", res);

#endif
#if 0

	while(a >= i){
		if(i % 5 == 0)
			res += i;
		i++;
	}
	printf("Faqat 5 bo'lingandagi sonlar yig'indisi: %d", res);

#endif
#if 1

	while(a >= i){
		if(!(i % 2))
			res++;
		i++;
	}
	printf("Juft sonlar soni: %d", res);

#endif
	return 0;

}
