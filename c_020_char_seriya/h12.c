#include <stdio.h>
#include <stdlib.h>

//void findNum(char text[]){
//	int start = 0,end = 0;
//	for(int i = 0; text[i] != '\0'; i++){
//		if(text[i] >= '0' && text[i] <= '9'){
//			start = i;
//			break;
//		}
//	}
//	int size = sizeof(text);
//	for(int i = size-1; i > -1 ; i--){
//		if(text[i] >= '0' && text[i] <= '9'){
//			end = i;
//			break;
//		}
//	}
//	for(int i = start; i <= end; i++){
//		printf("%c", text[i]);
//	}
//}

int main()
{
	char text[200];
	scanf("%[^\n]s", text);

	int start = 0,end = 0;
	for(int i = 0; text[i] != '\0'; i++){
		if(text[i] >= '0' && text[i] <= '9'){
			start = i;
			break;
		}
	}
	int size = sizeof(text);
	for(int i = size-1; i > -1; i--){
		if(text[i] >= '0' && text[i] <= '9'){
			end = i;
			break;
		}
	}
	for(int i = start+1; i <= end-1; i++){
		printf("%c", text[i]);
	}

//	findNum(text);
	return 0;
}
