#include <stdio.h>
#include <stdbool.h>

bool isAlNum(char x){
	return 'a' == x || x == 'i' || x == 'u' || x == 'e' || x == 'o';
}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	int countVowel = 0;
	for(int i = 0; text[i] != '\0'; i++){
		if(isAlNum(text[i])){
			countVowel++;
		}
	}
	printf("%d", countVowel);

	return 0;
}
