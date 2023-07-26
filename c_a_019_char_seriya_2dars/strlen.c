#include <stdio.h>
#include <string.h>

int main()
{
	char text[32];
	scanf("%s", text);

	int count = 0;
	for(int i = 0; text[i]; i++){
		count++;
	}

	printf("%d", count);

	return 0;
}
