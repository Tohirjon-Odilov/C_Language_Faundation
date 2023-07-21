#include <stdio.h>

int main()
{
	char text[50];
	scanf("%[^\n]s", text);

	int size = 0;
	for(int i = 0; text[i] != '\0'; i++,size++);
	int a = 0, b = 0;
	for(int i = 0; i < size/2; i++){
		if(text[i] == text[size-i-1]) a++;
	}
	if(a==size/2) printf("URA");
	else printf("KUKU");

	return 0;
}
