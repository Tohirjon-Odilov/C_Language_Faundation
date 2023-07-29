#include <stdio.h>

struct user{
	char name[32];
	char login[32];
	char password[32];
	int age;
};

int main()
{
	struct user p1;

	printf("Name: "); scanf("%s", p1.name);
	printf("Login: "); scanf("%s", p1.login);
	printf("Password: "); scanf("%s", p1.password);
	printf("Age: "); scanf("%i", &p1.age);

	puts("");

	printf("Name: %s\n", p1.name);
	printf("Login: %s\n", p1.login);
	printf("Password: %s\n", p1.password);
	printf("Age: %i\n", p1.age);

	return 0;
}
