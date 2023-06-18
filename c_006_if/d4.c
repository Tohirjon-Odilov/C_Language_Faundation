#include <stdio.h>

int main(){

	int num, res;
	char str;

	printf("Avval harf keyin son kiriting: ");
	scanf("%c%d", &str, &num);

	res = num % 26 + str;

	if(res >= 65 && res <= 90){
	 str = res;
	}else if(res >= 97 && res <= 122){
	 str = res;
	}else if(res >= 122){
	 res = res - 122 + 96;
	 str = res;
	}else if(res >= 90){
	 res = res - 90 + 64;
	 str = res;
	}else{
	 printf("Bunday harf mavjud emas.\n");
	}
	if(res >= 65 && res <= 90 || res >= 97 && res <= 122)
	 printf("%d = %c\n",str,str);

	return 0;

}
