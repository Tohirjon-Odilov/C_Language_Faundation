#include <stdio.h>

int main()
{

	char ch;

	printf("Harf kiriting: ");
	scanf("%c", &ch);

	if ('A' <= ch && ch <= 'Z')
		ch += 32;

	('a' <= ch && ch <= 'z') ? ('a' == ch || 'o' == ch || 'u' == ch || 'i' == ch || 'e' == ch || 'y' == ch) ? printf("Unli harf") : printf("Undosh harf.") : printf("Bunday harf mavjud.");

	return 0;
}
