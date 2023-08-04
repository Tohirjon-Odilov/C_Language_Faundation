#include <stdio.h>

int main()
{
	int max;
	int cur = 0;
	FILE *fp = fopen("l8.txt", "r");

		while(fscanf(fp, "%d", &cur) != EOF)
			if(cur > max)
				max = cur;
		printf("%d", max);

	fclose(fp);

	return 0;
}
