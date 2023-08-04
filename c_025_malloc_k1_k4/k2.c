#include <stdio.h>
#include <stdlib.h>

void enter_temp(float temps[]){
	static int i = 1;
	temps = malloc(i*sizeof(int));
//	for(int i = 0; i < n; i++){
//		scanf("%f", temps[0]);
//	}
//	printf("%d", n);
	temps = (float*)realloc(temps, i++);
//	float *new_temps =
}

int main()
{
	int stop = 1;
	int check;
	float temps[1];

	while(stop){
		puts("Menyuni tanlang: ");
		puts("Harorat kiritish uchun <<1>> ni bosing.");
		puts("Eng yuqori haroratni ko'rish uchun <<2>> ni bosing.");
		puts("O'rtacha haroratni ko'rish uchun <<3>> ni bosing.");
		puts("Eng past haroratni ko'rish uchun <<4>> ni bosing.");
		puts("Ob - havo ma'lumotlarini ko'rish uchun <<5>> ni bosing.");
		puts("Dasturni to'xtatish uchun <<0>> ni bosing.");
		printf("Tepdagilardan birini kiriting: "); scanf("%d", &check);

		if(check == 1){
			enter_temp(temps);
		}else if(check == 2){
//			higest_temp();
		}else if(check == 3){
//			avrg_data();
		}else if(check == 4){
//			lowest_temp();
		}else if(check == 5){
//			print_temp();
		}else if(check == 0){
			stop = 0;
			puts("Dasturdan chiqildi.");
		}
	}

	return 0;
}
