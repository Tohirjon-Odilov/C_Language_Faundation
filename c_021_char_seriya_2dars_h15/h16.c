#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char password[100];
	fgets(password, 100, stdin);
	int isDigit = 0, isLower = 0, isUpper = 0, isPunct = 0;
	if (strlen(password) < 8)
	{
		printf("Kuchsiz parol => murakkablashtiring!!!");
		return 0;
	}
	for (int i = 0; password[i] != '\0'; i++)
	{
		if (isdigit(password[i]))
			isDigit = 1;
		else if (islower(password[i]))
			isLower = 1;
		else if (isupper(password[i]))
			isUpper = 1;
		else if (ispunct(password[i]))
			isPunct = 1;
	}

	if (isDigit && isLower && isUpper && isPunct)
		printf("Murakkab");
	else
		printf("Kuchsiz parol => murakkablashtiring!!!");

	return 0;
}
