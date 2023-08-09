#include <stdio.h>

int main()
{
	FILE *f = fopen("text.txt", "r+");

	char c;

	while((c = fgetc(f)) != EOF){
		if('A' <= c && c <= 'Z'){
			c += 32;
			fseek(f,-1,1);
			fputc(c,f);
		}
	}


	fclose(f);

	return 0;
}
