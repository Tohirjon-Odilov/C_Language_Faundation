#include <stdio.h>

char toStar(char c){
	return c = 'A' <= c && 'Z' >= c ? '*' : c;
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		printf("%c", toStar(text[i]));
	}
	return 0;
}
