#include <stdio.h>

int main()
{
	char name[32];
	char second_name[32];
	int  age;
	int height;
	char nationality[32];
	float weight;

	printf("ENTER YOUR NAME: "); scanf("%s", name);
	printf("ENTER YOUR SECOND NAME: "); scanf("%s", second_name);
	printf("ENTER YOUR AGE: "); scanf("%d", &age);
	printf("ENTER YOUR HEIGHT: "); scanf("%d", &height);
	printf("ENTER YOUR NATIONALITY: "); scanf("%s", nationality);
	printf("ENTER YOUR WEIGHT: "); scanf("%f", &weight);

	FILE *file = fopen("data.txt", "w");

	fprintf(file, "Mening ismim %s\n", name);
	fprintf(file, "Familiyam %s\n", second_name);
	fprintf(file, "Bo'yim %d\n", height);
	fprintf(file, "Men %s man\n", nationality);
	fprintf(file, "Vaznim %f kg\n", weight);

	fclose(file);

	return 0;
}
