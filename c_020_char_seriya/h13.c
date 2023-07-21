#include <stdio.h>

int main()
{
	char text[50];
	scanf("%[^\n]s", text);

	int count = 0;

	for(int i = 0; text[i] != '\0'; i++){
		text[i] == ' ' && text[i-1] > 32 && count++;
	}
	printf("Kiritilgan so'zlar soni => %d.", count+1);

	return 0;
}
