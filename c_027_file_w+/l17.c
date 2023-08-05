#include <stdio.h>

int main()
{
	int user_num;
	printf("Enter number: "); scanf("%d", &user_num);

	char text[32];
	int count = 1;

	FILE *delete = fopen("output.txt", "w");
	FILE *fp = fopen("1.txt", "r");

		while(fscanf(fp, "%s", text) != EOF){
			if(user_num == count){
//				fprintf(delete, "if.%s\n", text);
				count++;
				continue;
			}
			else fprintf(delete, "%d.%s\n", count,text);
			count++;
		}

	fclose(fp);
	fclose(delete);

	return 0;
}
