#include <stdio.h>

void write_text(char text[]){
	printf("Kerakli so'zni kiriting: ");
	scanf("%s", text);
}

int main()
{
	char text[32];

	FILE *fp = fopen("text.txt", "w");
	while(text[0] != '0'){
		write_text(text);
		if(text[0] != '0')
		fprintf(fp,"%s",text);
	}

	return 0;
}
