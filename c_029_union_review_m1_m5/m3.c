#include <stdio.h>

int tch(char c, char h){
	int m = (c - '0') * 10 + h - '0' ;
	return m;
}

int main()
{
	char date[12];
	scanf("%s", date);
	int i = 0;
	char month[32];

	FILE *fw = fopen("date.txt", "w");
	FILE *fr = fopen("month.txt", "r");

		while(fscanf(fr, "%s", month) != EOF){
			i++;
  			if(i == tch(date[3],date[4])){
				fprintf(fw,"%c%c-%s, %c%c%c%c-yil\n",date[0]=='0'?' ':date[0],
					date[1],month,date[6],date[7],date[8],date[9]);
				break;
			}
		}

	fclose(fr);
	fclose(fw);

	return 0;
}
