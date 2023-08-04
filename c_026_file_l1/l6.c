#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	FILE *fp = fopen("data.txt", "w");

	for(int i = 1; i <= n; i++)
	fprintf(fp, "%d\n", i);

	fclose(fp);

	return 0;
}
