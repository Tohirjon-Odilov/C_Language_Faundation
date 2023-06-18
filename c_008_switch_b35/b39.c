#include <stdio.h>

int main(){

    int num;

    printf("Iltimos faqat son kiriting: ");
    scanf("%d", &num);

    switch(num){
        case 0 ... 9: printf("Bir xonali son!"); break;
        case 10 ... 99: printf("Ikki xonali son! "); break;
        case 100 ... 999: printf("Uch xonali son!"); break;
        case 1000 ... 9999: printf("To'rt xonali son!"); break;
        case 10000 ... 99999: printf("Besh xonali son!"); break;

        default: printf("Juda katta son!!!\n");
    }

	return 0;
}
