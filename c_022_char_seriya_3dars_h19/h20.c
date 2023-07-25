#include <stdio.h>
#include <string.h>

int main()
{
	char name[20];
	char second_name[20];
	scanf("%s", name);
	scanf("%s", second_name);

	strcpy(name+strlen(name)/2, "");
	strcpy(second_name+strlen(second_name)/2, "");
	strcat(name,second_name);

	puts(name);

	return 0;
}
