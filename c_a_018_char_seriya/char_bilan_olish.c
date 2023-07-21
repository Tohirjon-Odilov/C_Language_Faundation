#include <stdio.h>

int main()
{
	char a[5];
	for(int i = 0; i < 5; i++){
		a[i] = getchar();
	}

	for(int i = 5; i >= 0; i--){
		putchar(a[i]);
	}
	return 0;
}
