#include <stdio.h>

int main()
{
	char a[100];

	int size = sizeof(a);
	for(int i = 0; i < 100; i++){

		a[i] = getchar();
		if(a[i] == '\n'){
			break;
		}
	}

//	for(int i = 0; i < 100; i++){
	for(int i = size; i > -1; i--){
		putchar(a[i]);
		if(a[i] == '\0') break;
	}
	return 0;
}
