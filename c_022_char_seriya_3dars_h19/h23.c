#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char sentence[500];
	scanf("%[^\n]s", sentence);

	for(int i = 0; sentence[i]; i++){
		if(ispunct(sentence[i])) continue;
		else if(sentence[i] != ' '){
			printf("%c", sentence[i]);
		}else puts("");
	}

	return 0;
}
