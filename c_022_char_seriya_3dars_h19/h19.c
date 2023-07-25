#include <stdio.h>
#include <string.h>

int main()
{
	char name[20];
	char second_name[20];
	scanf("%s", name);
	scanf("%s", second_name);

	char new_second_name[20];

	strcpy(new_second_name, second_name+strlen(second_name)/2);
	strcpy(name, name+strlen(name)/2);
	strcat(new_second_name,name);

	puts(new_second_name);

	return 0;
}
