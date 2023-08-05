#include <stdio.h>

int main()
{
	int count = 0;
	char str[32];

	FILE *fp = fopen("text.txt", "r");

		while(fscanf(fp, "%s", str) != EOF) count++;

		printf("%d", count);

	fclose(fp);

	return 0;
}
