#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[20];
	fgets(str,20,stdin);

	int isnum = 1;

	for(int i = 0; str[i] != '\0'; i++){
		if(isdigit(str[i])){
			isnum++;
			printf("kirdi");
		}
	}

	if(isnum == strlen(str))
		printf("Faqat sonlardan iborat");
	else printf("Sondan boshqa belgi kiritilgan!!!");

	return 0;
}
