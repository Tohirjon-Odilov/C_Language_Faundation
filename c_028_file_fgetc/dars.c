#include <stdio.h>

int main()
{

    FILE *f = fopen("company.txt", "r");

	if(f == NULL){
		printf("Error!");
		return 1;
	}

    char c;
	fseek(f, -2, SEEK_END);
    while(ftell(f))
    {
        printf("%c", fgetc(f));
		fseek(f, -2, SEEK_CUR);
    }
	printf("%c", fgetc(f));

	fclose(f);

    return 0;
}
