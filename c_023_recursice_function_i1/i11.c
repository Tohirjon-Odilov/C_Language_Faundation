#include <stdio.h>

void nextChar(int c){
	if(c <= 122){
		printf("%c ", c);
		nextChar(c+1);
	}
}

int main()
{
	char c;
	scanf("%c", &c);

	nextChar(c);

	return 0;
}
