#include <stdio.h>
#include <stdbool.h>

bool isDigit(char x){
	return '0' <= x && '9' >= x;
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		if(isDigit(text[i])){
			printf("%c", text[i]);
		}
	}

	return 0;
}
