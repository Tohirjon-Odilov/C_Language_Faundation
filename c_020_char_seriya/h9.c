#include <stdio.h>
#include <stdbool.h>

char toLower(char a){
	return a += 'A' <= a && 'Z' >= a ? 32 : 0;
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		printf("%c", toLower(text[i]));
	}
	return 0;
}
