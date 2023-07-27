#include <stdio.h>
#include <string.h>
#include <ctype.h>

int string_to_number(char date){
	int num = 0;
	if(date != '.'){
		num += num * 10 + (date - '0');
		printf("%d", num);
	}
	else{
		puts("");
//		num = 0;
	}
	return num;
}

int main()
{
	char date[20];
	scanf("%s", date);

	int num;
	int check = 0;

	for(int i = 0; date[i]; i++){
		num = string_to_number(date[i]);
		if(0 < num && num <= 31 && i == 2) check++;
		if(0 < num <= 12 && i == 5) check++;
		if(0 < num && 5 < i ) check++;
		printf("%d", check);
	}

	if(check == 3) puts("To'g'ri");
	else puts("Noto'g'ri");

	return 0;
}
