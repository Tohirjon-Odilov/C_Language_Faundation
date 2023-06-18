#include <stdio.h>

int main(){

	int s;

	printf("Sekundlarda kiriting: ");
	scanf("%d", &s); printf("%d minut va %d sekund", s/60, s%60 );

	return 0;

}
