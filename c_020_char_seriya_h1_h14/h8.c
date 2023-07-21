#include <stdio.h>
#include <stdbool.h>

bool isVowel(char a){
	a += 'A' <= a && 'Z' >= a ? 32 : 0;
	return 'a' == a || 'e' == a || 'u' == a || 'i' == a || 'o' == a;
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	for(int i = 0; text[i] != '\0'; i++){
		isVowel(text[i]) && printf("%c", text[i]);
		printf("%c", text[i]);
	}

	return 0;
}
