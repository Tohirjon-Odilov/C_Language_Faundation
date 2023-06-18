#include <stdio.h>

int main(){

	int c;
	float a,b,res;

	printf("A va B ni kiriting: ");
	scanf("%f %f", &a,&b);
	printf("Arifmetik amal kiriting:\n'+' = 1\n'-' = 2\n'/' = 3\n'*' = 4\n>> ");
    scanf("%d", &c);

	switch(c){
		case 1: res = a + b; break;
		case 2: res = a - b; break;
		case 3: res = a / b; break;
		case 4: res = a * b; break;
		default : printf("Error !\n");
	}
	printf("%g", res);

	return 0;

}
