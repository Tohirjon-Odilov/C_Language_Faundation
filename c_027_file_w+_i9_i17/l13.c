#include <stdio.h>

int main()
{
	char text[32];
	int count = 0;

	FILE *fp = fopen("text.txt", "r");

		while(fgets(text, sizeof(text), fp)) count++;

	fclose(fp);

	printf("%d", count);

	return 0;
}
