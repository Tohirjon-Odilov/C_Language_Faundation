#include <stdio.h>

typedef struct country{
	char name[32];
	char language[32];
	char religion[32];
	int population;
	int num_of_cities;
	float area;
	char capital[32];
	char money[32];
} COUNTRY;

COUNTRY create_country(){
	COUNTRY new;

	printf("Enter name: "); scanf("%s", new.name);
	printf("Enter language: "); scanf("%s", new.language);
	printf("Enter religion: "); scanf("%s", new.religion);
	printf("Enter population: "); scanf("%d", &new.population);
	printf("Enter num of cities: "); scanf("%d", &new.num_of_cities);
	printf("Enter area: "); scanf("%f", &new.area);
	printf("Enter capital: "); scanf("%s", new.capital);
	printf("Enter money: "); scanf("%s", new.money);

	return new;
}

void print_country(COUNTRY new){
	printf("Name: %s\n", new.name);
	printf("Language: %s\n", new.language);
	printf("Religion: %s\n", new.religion);
	printf("Population: %d\n", new.population);
	printf("Num of cities: %d\n", new.num_of_cities);
	printf("Area: %g\n", new.area);
	printf("Capital: %s\n", new.capital);
	printf("Money: %s\n", new.money);
	puts("");
}

int main()
{
	int n;
	printf("Nechta davlat ma'lumotlarini kiritmoqchisiz: "); scanf("%d", &n);
	COUNTRY arr[n];

	for(int i = 0; i < n; i++){
		printf("\n%d - davlat ma'lumotlarini kiriting:\n\n", i+1);
		arr[i] = create_country();
	}
	puts("\nCountry information:");
	for(int i = 0; i < n; i++){
		printf("%d - davlat ma'ulotlari:\n\n",i+1);
		print_country(arr[i]);
	}

	return 0;
}
