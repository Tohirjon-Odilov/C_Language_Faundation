#include <stdio.h>

int main()
{
	char text[1000];
	FILE *fp = fopen("l4.txt", "r");
	int i = 0;
	while(fscanf(fp, "%s", text) != EOF){
		if(++i == 1) continue;
		puts(text);
		puts(text);
		break;
	}

	fclose(fp);

	return 0;
}
