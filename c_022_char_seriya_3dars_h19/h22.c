#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[26];
	scanf("%s", text);
	int a = 0, b = 0;

	for(int i = 0; text[i]; i++)
		a += text[i];

	for(int i = 97; i <= 122; i++)
		b += i;

	printf("%c harfi qolib ketgan", b-a);

	return 0;
}
