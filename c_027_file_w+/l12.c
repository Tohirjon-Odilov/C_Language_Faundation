#include <stdio.h>
#include <string.h>

int main()
{
	char text[32];
	int count = 0;

	FILE * fp = fopen("text.txt", "r");

	while(fscanf(fp, "%s", text) != EOF){
		if(!strcmp(text, "is")) count++;
	}

	printf("%d", count);

	fclose(fp);

	return 0;
}
