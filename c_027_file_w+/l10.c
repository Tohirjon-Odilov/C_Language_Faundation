#include <stdio.h>

int main()
{
	char text[1000];

	FILE *text1 = fopen("text1.txt", "r");
	FILE *text2 = fopen("text2.txt", "a");

	fputs("\n", text2);
	while(fgets(text, sizeof(text), text1)){
		fprintf(text2, "%s", text);
	}

	fclose(text1);
	fclose(text2);

	return 0;
}
