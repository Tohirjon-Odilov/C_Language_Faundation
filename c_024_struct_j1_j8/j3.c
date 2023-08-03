#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct market{
	char name[32];
	int product;
	int stare;
	char type[32];
} MARKET;

MARKET create_market(){
	MARKET new;
	printf("ENTER MARKET NAME: "); scanf("%s", new.name);
	printf("ENTER MARKET PRODUCT NUMBER: "); scanf("%d", &new.product);
	printf("ENTER MARKET STARE NUMBER: "); scanf("%d", &new.stare);
	printf("ENTER MARKET TYPE: "); scanf("%s", new.type);

	return new;
}

void print_market(MARKET new){
	printf("MARKET NAME: %s\n", new.name);
	printf("MARKET PRODUCT NUMBER: %d\n", new.product);
	printf("MARKET STARE NUMBER: %d\n", new.stare);
	printf("MARKET TYPE: %s\n", new.type);
	puts("");
}

void print_order_market(MARKET market, int n){
	market.type[0] = toupper(market.type[0]);
	for(int i = 1; i < n; i++){
		market.type[i] = tolower(market.type[i]);
	}
	if(!strcmp(market.type, "Gipermarket") && market.stare > 2){
		puts("============SORT==============");
		print_market(market);
	}
}

int main()
{
	int n;
	printf("Enter number of market: ");scanf("%d", &n);
	MARKET number_of_market[n];

	for(int i = 0; i < n; i++){
		printf("\n%d - market:\n", i+1);
		number_of_market[i] = create_market();
	}

	puts("");

	for(int i = 0; i < n; i++){
		print_order_market(number_of_market[i], strlen(number_of_market[0].type));
	}

	return 0;
}
