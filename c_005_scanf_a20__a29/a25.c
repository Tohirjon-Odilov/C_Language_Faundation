#include <stdio.h> 

int main(){

	int a,b,c;

	printf("Uzunligi, bo'yi va kengligini kiriting: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Paralellipedning yuzasi %d ga teng.", (a*b+c*b+a*c)*2);

	return 0;

}
