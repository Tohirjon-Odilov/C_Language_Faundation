#include <stdio.h>
#include <stdbool.h>

bool isLower(char x){
	return 'a' <= x && 'z' >= x;
}

int main()
{
	char text[20];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		if(isLower(text[i])){
			printf("%c", text[i]);
		}
	}

	return 0;
}
