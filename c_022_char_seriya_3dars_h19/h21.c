#if 0
H21: Udar masala😎

cheksiz so'z kiritamiz va biz hohlaganda so'z kiritishni to'xtatishimiz mumkin((Masalan: "stop"). Ushbu kiritilgan so'zlardan gap yasash kerak. Agar so'zlar soni 5tadan oshib ketsa, unda har bir 5ta so'z bitta gap hisoblansin va ekranga chqarsin. oxiriga (.) nuqta qoyib
Input: 
salom 
bolalar 
yaxshimi
qaley
Output: "Salom bolalar yaxshimi qaley."
#endif

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[32];
	char firstChar[1000];
	int size = 0;

	while(strcmp(text, "stop")){
		scanf("%s", text);
		size++;
		int len = strlen(text);
		if(strcmp(text,"stop")){
			if(size == 1)
				text[0] = toupper(text[0]);
			if(size != 5)strcat(text, " ");
			if(ispunct(text[len-1]) && size == 5)
				text[len-1] = '.';
			strcat(firstChar, text);
			if(size == 5){
				if(!ispunct(text[len-1]))
					strcat(firstChar, ".");
				strcat(firstChar, " ");
				size = 0;
			}
		}
	}

	int new_len = strlen(firstChar);
//	if(firstChar[new_len] != '.') strcpy(firstChar+new_len-1, ".");
	if(size <= 5 && ispunct(firstChar[new_len-2]))
		firstChar[new_len-2] = '.';
	else firstChar[new_len-1] = '.';
	puts(firstChar);

	return 0;
}
