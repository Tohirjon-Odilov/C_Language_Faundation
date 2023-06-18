#include <stdio.h>

int main()
{

	char ch;

	printf("Belgi kiriting: ");
	scanf("%c", &ch);

	if ('A' <= ch && ch <= 'Z')
		printf("%c", ch + 32);
	else if ('a' <= ch && ch <= 'z')
		printf("%c", ch - 32);
	else
		printf("%c", ch);

	return 0;
}
