#include <stdio.h>

int main()
{
	char text[32];

	FILE *fp = fopen("text.txt", "r");

		while(fscanf(fp, "%s", text) != EOF)
			if(text[0] == 'p') puts(text);

	fclose(fp);

	return 0;
}
