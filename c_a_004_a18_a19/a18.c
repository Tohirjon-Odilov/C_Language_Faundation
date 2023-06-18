#include<stdio.h>

int main(){

	long long int gb = 1;
	printf("1gb = %lldmb\n", gb * 1024);
	printf("1gb = %lldkb\n", gb * 1024 * 1024);
	printf("1gb = %lldbyte\n", gb * 1024 * 1024 * 1024);
	printf("1gb = %lldbit\n", gb * 1024 * 1024 * 1024 * 8);
	return 0;

}
