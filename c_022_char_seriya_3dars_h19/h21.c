#include <stdio.h>
#include <string.h>

int main()
{
	char text[100];
	scanf("%[/stop/]s", text);

	puts(text);

	return 0;
}
