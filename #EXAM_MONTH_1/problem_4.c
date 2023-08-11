#include <stdio.h>
#include <ctype.h>

int main()
{
	char text[256];
	int count = 0;
	printf("Enter sentence: "); scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		if(isupper(text[0]))
			count++;
	}

	printf("Words with capitals: %d\n", count);

	return 0;
}
