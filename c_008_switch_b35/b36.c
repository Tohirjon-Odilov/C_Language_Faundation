#include <stdio.h>

int main(){

	char str;

	printf("Faqat harf kiriting: ");
	scanf("%c", &str);

	switch(str){
		case 65 ... 90: str += 32;
		case 97 ... 122:
			switch(str){
				case 'a': case 'o': case 'u': case 'i': case 'e': case 'y':
					printf("Unli harf."); break;
				default: printf("Undosh harf.");
			}
		break;
		default: printf("Bunday harf yo'q!");
	}


	return 0;

}
