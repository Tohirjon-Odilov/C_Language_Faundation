#include <stdio.h>

void get_addres(int *id_addres){
	printf("%p", id_addres);
}

int main()
{
	int id = 15048;

	get_addres(&id);

	return 0;
}
