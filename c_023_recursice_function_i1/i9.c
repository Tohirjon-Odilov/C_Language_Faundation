#include <stdio.h>
#include <string.h>

void reverseStr(char str[], int len){
	printf("%c",str[len]);
	if(len > 0)
		reverseStr(str,len-1);
}

int main()
{
	char str[25];
	scanf("%s", str);

	reverseStr(str, strlen(str));

	return 0;
}
