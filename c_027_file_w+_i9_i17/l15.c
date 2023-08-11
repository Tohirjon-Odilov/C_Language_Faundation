#include <stdio.h>
#include <string.h>

int main()
{
	char text[32];
	FILE *fp = fopen("text.txt", "r");

		char max[32];
		fscanf(fp, "%s", max);
		while(fscanf(fp, "%s", text) != EOF){
			if(strlen(text) > strlen(max))
				strcpy(max, text);
		}
		puts(max);

	fclose(fp);

	return 0;
}
