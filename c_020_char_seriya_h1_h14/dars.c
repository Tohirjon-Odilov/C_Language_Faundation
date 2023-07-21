#include <stdlib.h>
#include <stdio.h>
#include <regex.h>

int main()
{
	char text[200];

	scanf("%[a^]s", text);

	printf("%s",text);

//	for(int i = 0; text[i] != '\0'; i++){
//		printf("%c ", text[i]);
//	}

	return 0;
}
