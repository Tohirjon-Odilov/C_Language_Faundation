#include <stdio.h>

int main(){

	int num;

	printf("Hafta kunlarini sonlarda kiriting: ");
	scanf("%d", &num);

	switch(num){
		case 1 ... 5: printf("Ish kunlari.\n"); break;
		case 6 ... 7: printf("Dam olish kunlari.\n"); break;
		default : printf("Bunday kun yo'q!\n");
	}

	return 0;

}
