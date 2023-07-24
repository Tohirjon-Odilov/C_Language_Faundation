#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char password[100];
	fgets(password, 100, stdin);
	int num = 0, az = 0, AZ = 0, punc = 0;

	for(int i = 0; password[i] != '\0'; i++){
		if(isdigit(password[i])) num = 1;
		else if(islower(password[i])) az = 1;
		else if(isupper(password[i])) AZ = 1;
		else if(ispunct(password[i])) punc = 1;
	}

	if(strlen(password) > 8 && num && az && AZ && punc)
		printf("Murakkab");
	else printf("Kuchsiz parol => murakkablashtiring!!!");

	return 0;
}
