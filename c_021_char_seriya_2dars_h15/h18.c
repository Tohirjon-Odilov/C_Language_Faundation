#include <stdio.h>
#include <ctype.h>

void isCapitalise(char str[]){
	str[0] = toupper(str[0]);
	for(int i = 1; str[i] != '\0'; i++){
		str[i] = tolower(str[i]);
	}
}

int main()
{
	char str[20];
	fgets(str,20,stdin);

	isCapitalise(str);
	puts(str);

	return 0;
}
