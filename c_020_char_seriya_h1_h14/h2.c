#include <stdio.h>
#include <stdbool.h>

bool isAlpha(char x){
	x += x >= 'A' && x <= 'Z'?32:0;
	return 'a' <= x && 'z' >= x;
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		if(isAlpha(text[i])){
			printf("%c", text[i]);
		}
	}

	return 0;
}
