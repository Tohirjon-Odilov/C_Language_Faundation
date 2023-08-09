#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct word{
	char eng[32];
	char uzb[32];
} WORD;

void display(){
	puts("<<1>> Lug'atga yangi so'z qo'shish.");
	puts("<<2>> So'z qidirish.");
	puts("<<3>> Lug'atni ko'rish.");
	puts("<<0>> Chiqish.");
	printf(">>> ");
}

void add_new_word(){
	WORD word;
	FILE *f = fopen("dictionary.txt", "a");
	printf("English: "); scanf("%s", word.eng);
	for(int i = 0; word.eng[i] != '\0'; i++)
		word.eng[i] = tolower(word.eng[i]);

	printf("Uzbek: "); scanf("%s", word.uzb);
	for(int i = 0; word.uzb[i] != '\0'; i++)
		word.uzb[i] = tolower(word.uzb[i]);

	fprintf(f, "%s %s\n", word.eng, word.uzb);
	fclose(f);
}

void show_words(){
	FILE *fr = fopen("dictionary.txt", "r");
	WORD word;
	puts("+---------------+---------------+");
	puts("| ENGLISH       | UZBEK         |");
	puts("+---------------+---------------+");

	while(fscanf(fr, "%s", word.eng) != EOF){
		fscanf(fr, "%s", word.uzb);
		printf("| %-13s | %-13s |\n", word.eng, word.uzb);
	}
	puts("+---------------+---------------+");

	fclose(fr);
}

void search_word(){
	char eng[32], uzb[32];
	int i = 0;
	WORD word;
	int check;
	puts("<<1>> English - Uzbek.");
	puts("<<2>> Uzbek - English.");
	printf(">>> "); scanf("%d", &check);

	FILE *fr = fopen("dictionary.txt", "r");

	if(check == 1){
		printf("Ingilizcha so'z kiriting>>> "); scanf("%s", eng);
		while(eng[i] != '\0'){
			eng[i] = tolower(eng[i]);
			i++;
		}

		puts("+---------------+---------------+");
		puts("| ENGLISH       | UZBEK         |");
		puts("+---------------+---------------+");

		while(fscanf(fr, "%s", word.eng) != EOF){
			if(!(strcmp(word.eng, eng))){
				fscanf(fr, "%s", word.uzb);
				printf("| %-13s | %-13s |\n", word.eng, word.uzb);
			}
		}

	}else if(check == 2){
		printf("Uzbekcha so'z kiriting>>> "); scanf("%s", uzb);
		while(uzb[i] != '\0'){
			uzb[i] = tolower(uzb[i]);
			i++;
		}

		puts("+---------------+---------------+");
		puts("| ENGLISH       | UZBEK         |");
		puts("+---------------+---------------+");

		fscanf(fr, "%s", word.eng);
		while(fscanf(fr, "%s", word.uzb) != EOF){
			if(!(strcmp(word.uzb, uzb)))
				printf("| %-13s | %-13s |\n", word.eng, word.uzb);

			fscanf(fr, "%s", word.eng);
		}
	}
	puts("+---------------+---------------+");

	fclose(fr);
}

int main(){
	int choice = 0;

	while(choice != 4){
		display();
		scanf("%d", &choice);

		switch(choice){
			case 1: add_new_word(); break;
			case 2: search_word(); break;
			case 3: show_words(); break;
			case 4: exit(0); break;
			default: printf("Iltimos menyudagilarnigina tanlang!\n"); break;
		}
	}


	return 0;
}

