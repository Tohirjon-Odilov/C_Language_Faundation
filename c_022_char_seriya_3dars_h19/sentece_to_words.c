#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[32];
	char firstChar[1000];
	int size = 0, i;

	while(strcmp(text, "stop")){
		scanf("%s", text);
		size++;
		if(strcmp(text,"stop")){
			strcat(text, " ");
			strcat(firstChar, text);
		}
	}
	for(i = 0; firstChar[i]; i++){
		firstChar[i] = tolower(firstChar[i]);
		if(firstChar[i] == '.')
			firstChar[i] = ' ';
	}

	printf("%s",firstChar);

	return 0;
}
