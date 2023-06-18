#include <stdio.h>

int main(){

	int a,b;

	printf("A son va B son kiriting: ");
	scanf("%d %d", &a, &b);

	switch(a > b){
		case 1: printf("\"max = %d\"\n", a); break;
		case 0:
			switch(a < b){
				case 1: printf("\"max = %d\"\n", b); break;
				case 0:
					switch(a == 0 && b == 0){
						case 1: printf("Error!!!\n");
						case 0: printf("\"Numbers is equal.\"\n"); break;
					}
			}
	}

	return 0;


}
