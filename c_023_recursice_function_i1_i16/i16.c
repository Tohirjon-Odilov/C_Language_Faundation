#include <stdio.h>

void show_qator(int karra, int kopaytma, int gacha){
	if(karra <= gacha){
		printf("%d * %2d = %2d\t", karra, kopaytma, karra*kopaytma);
		show_qator(karra+1, kopaytma, gacha);
	}else puts("");
}
void beshta_block(int karra, int kopaytma, int gacha){
	show_qator(karra, kopaytma, gacha);
	if(kopaytma < 10){
		beshta_block(karra, kopaytma+1, gacha);
	}
}

int main()
{
	beshta_block(1,1,5);
	puts("");
	beshta_block(6,1,10);

	return 0;
}
