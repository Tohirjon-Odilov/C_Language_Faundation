#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int check;
	int i = 0;

	char fname[32];

	printf("FILE NOMINI KIRITING: ");
	scanf("%s", fname);

	strcat(fname, ".txt");

	char str[1000],text[1000];

	FILE *fp = fopen(fname, "w+");
	while(1){
		printf("Read >> 1, Write >> 2, Exit >> 3:\n");
		scanf("%d", &check);
		if(check == 1){
			system("clear");
			puts("Siz kiritgan ma'lumotlar: ");
			puts("---------------------------");
			while(fscanf(fp, "%s", text) != EOF)
				printf("%s ", text);
			puts("\n---------------------------");
		}else if(check == 2){
			system("clear");
			printf("Matn kiriting: ");
			scanf("%[^0]s", str);
			fprintf(fp, "%s", str);
			fseek(fp, 0, 0);
			getchar();
			system("clear");
		}else if(check == 3){
			exit(0);
		}
	}

	return 0;
}
