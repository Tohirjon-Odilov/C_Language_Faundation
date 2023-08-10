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

char *to_lower(char word[]){
	for(int i = 0; word[i] != '\0'; i++)
		word[i] = tolower(word[i]);
	return word;
}

void add_new_word(){
	WORD word;
	FILE *f = fopen("dictionary.txt", "a");
	printf("English: "); scanf("%s", word.eng);
	strcpy(word.eng, to_lower(word.eng));

	printf("Uzbek: "); scanf("%s", word.uzb);
	strcpy(word.uzb, to_lower(word.uzb));

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
#if 0
void translate(char sentence[], int lang){
	FILE *fr = fopen("dictionary.txt", "r");
	char eng[32], uzb[32];
	WORD word;
	int i = 0;
//	if(!strcmp(lang, uzb)){
//		
//	}
//	strcpy(word."lang", to_lower(sentence));

	puts("+---------------+---------------+");
	puts("| ENGLISH       | UZBEK         |");
	puts("+---------------+---------------+");
	if(lang == 2){
	puts("2");
		fscanf(fr, "%s", word.eng);
		while(fscanf(fr, "%s", word.uzb) != EOF){
//			if(!strcmp(lang,"eng"))
				if(!strcmp(word.eng, sentence))
					printf("| %-13s | %-13s |\n", word.eng, word.uzb);

//			else if(!strcmp(lang,"uzb"))
//				if(!strcmp(word.uzb, sentence))
//					printf("| %-13s | %-13s |\n", word.eng, word.uzb);
			fscanf(fr, "%s", word.eng);
		}
	}else if(lang == 1){
	puts("1");
		while(fscanf(fr, "%s", word.uzb) != EOF){
			if(!strcmp(word.eng, sentence)){
				fscanf(fr, "%s", word.eng);
				printf("| %-13s | %-13s |\n", word.eng, word.uzb);
			}
		}
	}

	fclose(fr);
}
#endif
void search_word(){
	char sentence[32];
	int i = 0;
	WORD word;
	int check;

	puts("<<1>> English - Uzbek.");
	puts("<<2>> Uzbek - English.");
	printf(">>> "); scanf("%d", &check);

	FILE *fr = fopen("dictionary.txt", "r");

	if(check == 1){
		printf("Ingilizcha so'z kiriting>>> "); scanf("%s", sentence);
		strcpy(sentence, to_lower(sentence));
//		translate(sentence,"eng");

		puts("+---------------+---------------+");
		puts("| ENGLISH       | UZBEK         |");
		puts("+---------------+---------------+");

		while(fscanf(fr, "%s", word.eng) != EOF){
			if(!(strcmp(word.eng, sentence))){
				fscanf(fr, "%s", word.uzb);
				printf("| %-13s | %-13s |\n", word.eng, word.uzb);
			}
		}

	}else if(check == 2){
		printf("Uzbekcha so'z kiriting>>> "); scanf("%s", sentence);
		strcpy(sentence, to_lower(sentence));
//		translate(sentence,"uzb");

		puts("+---------------+---------------+");
		puts("| ENGLISH       | UZBEK         |");
		puts("+---------------+---------------+");

		fscanf(fr, "%s", word.eng);
		while(fscanf(fr, "%s", word.uzb) != EOF){
			if(!(strcmp(word.uzb, sentence)))
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
			case 1: /*system("clear");*/ add_new_word(); break;
			case 2: /*system("clear");*/ search_word(); break;
			case 3: /*system("clear");*/ show_words(); break;
			case 0: /*system("clear");*/ exit(0); break;
			default: printf("Iltimos menyudagilarnigina tanlang!\n"); break;
		}
	}

	return 0;
}

