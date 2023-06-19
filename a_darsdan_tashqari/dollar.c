#include <stdio.h>

int main(){

	float usd;

	printf("So'm kiriting: ");
	scanf("%f", &usd);

	(usd > 1150000) ? printf("%.2f$", usd / 11500) : printf("100$ ga yetmadi!\n");

	return 0;

}
