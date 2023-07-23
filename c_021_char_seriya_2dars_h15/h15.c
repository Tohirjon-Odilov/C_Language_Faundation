#include <stdio.h>
#include <string.h>

int main()
{
	char ip_address[20];
	scanf("%[^\n]s", ip_address);
	char protected_address[30];
	for(int i = 0; ip_address[i] != '\0'; i++){
//		if('0' <= ip_address[i] && ip_address[i] <= '9'){
//		}
		if('0' <= ip_address[i] && ip_address[i] <= '9'){
			protected_address[i] = ip_address[i];
			protected_address[i+1] = ' ';
		}else if(ip_address[i] == '.'){
			protected_address[i+1] = ip_address[i];
//			printf("%c",ip_address[i]);
//			break;
		}
//		if(!('0' <= ip_address[i] && ip_address[i] <= '9')){
//			if(ip_address[i+1] == '.'){
//					protected_address[i+1] = '[';
//			}else if (ip_address[i-1 == '.']){
//				protected_address[i] = ']';
//			}
//		}
	}
	printf("%s", protected_address);

	return 0;
}
