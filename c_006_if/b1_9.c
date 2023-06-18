#include <stdio.h>

int main(){

        float a,b;

        printf("a ni kiriting: ");
        scanf("%f", &a);
        printf("b ni kiriting: ");
        scanf("%f", &b);
	printf("a = %.1f, b = %.1f\n", a,b);

        if(a > b){
	 a = a + b;
	 b = a - b;
	 a = a - b;
         printf("a = %.1f kichik b = %.1f dan.\n", a,b);
        }else if(a < b){
         printf("a = %.1f kichik b = %.1f dan.\n", a,b);
        }else{
         printf("Ikkala son ham bir-biriga teng.\n");
        }

        return 0;

}

