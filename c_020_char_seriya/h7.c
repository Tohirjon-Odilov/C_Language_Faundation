#include <stdio.h>
#include <stdbool.h>

bool isSpace(char a){
	return a == ' ';
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	int count_space = 0;
	for(int i = 0; text[i] != '\0'; i++){
		if(isSpace(text[i])){
			count_space++;
		}
	}
	printf("%d", count_space);

	return 0;
}
