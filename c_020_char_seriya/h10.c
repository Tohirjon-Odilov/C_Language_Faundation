#include <stdio.h>

char changeLatter(char c){
//	if('A' <= c && 'Z' >= c) return c+32;
//	else if('a' <= c && 'z' >= c) return c-32;
//	else return c;
	return c = 'A' <= c && c <= 'Z' ? c+32 : 'a' <= c && c <= 'z' ? c-32 : c;
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		printf("%c",changeLatter(text[i]));
	}

	return 0;
}
