#include <stdio.h>
#include <stdlib.h>

void fibonachi(int f1, int f2, int f3){
	if(f3 > 0){
		f1 += f2;
		fibonachi(f2, f1, f3-1);
		printf("%d", f2);
		exit(0);
	}
}

int main()
{
	int f1,f2,f3;
	scanf("%d %d %d", &f1,&f2,&f3);

	fibonachi(f1,f2,f3);

	return 0;
}
