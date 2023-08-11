#include <stdio.h>

int main()
{
	int num;
	printf("Enter line: "); scanf("%d", &num);

	char user_text[32];
	printf("Enter words: "); scanf("%s", user_text);

	int count = 1;
	char text[32];

	FILE *fp = fopen("output.txt", "w");
	FILE *find = fopen("1.txt", "r");

		while(fscanf(find, "%s", text) != EOF){
			if(num == count)
				fprintf(fp, "%s\n", user_text);
			fprintf(fp, "%s\n", text);
			count++;
		}

	fclose(find);
	fclose(fp);

	return 0;
}
