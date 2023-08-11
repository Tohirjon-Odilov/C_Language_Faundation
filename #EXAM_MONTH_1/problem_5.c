#include <stdio.h>

int main()
{
	char file_1[100];
	char file_2[100];

	FILE *f1 = fopen("1.txt", "r");
	FILE *f2 = fopen("2.txt", "r");
	FILE *fa = fopen("output.txt", "w");

	while(fscanf(f1,"%s", file_1) != EOF){
		fprintf(fa, "%s\n", file_1);
	}

	while(fscanf(f2,"%s", file_1) != EOF){
		fprintf(fa, "%s\n", file_1);
	}

	fclose(f1);
	fclose(f2);
	fclose(fa);

	return 0;
}
