#include <stdio.h>
#include <string.h>

int main()
{
	char ip_address[20];
	scanf("%[^\n]s", ip_address);
	char protected_address[30];
	for(int i = 0, j = 0; ip_address[i] != '\0'; i++){
		if(ip_address[i] == '.'){
			protected_address[j++] = '[';
			protected_address[j++] = ip_address[i];
			protected_address[j++] = ']';
		}
		else protected_address[j++] = ip_address[i];
	}
	printf("%s", protected_address);

	return 0;
}
