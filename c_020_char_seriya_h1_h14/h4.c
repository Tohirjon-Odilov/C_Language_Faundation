#include <stdio.h>
#include <stdbool.h>

bool isAlNum(char x){
	x += '0' <= x && x <= '9' ? 49 : x >= 'A' && x <= 'Z' ? 32:0;
	return 'a' <= x && x <= 'z';
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		if(isAlNum(text[i])){
			printf("%c", text[i]);
		}
	}

	return 0;
}
