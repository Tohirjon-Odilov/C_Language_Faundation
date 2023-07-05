#include <stdio.h>

char swap_case(char a)
{
	if(a >= 'a' && a <= 'z')
		return a - 32;
	else if(a >= 'A' && a <= 'Z')
		return a + 32;
	else
		return a;
}


int main()
{
	char c;

	scanf("%c", &c);
	char result = swap_case(c);

	printf("%c", result);
	return 0;
}
