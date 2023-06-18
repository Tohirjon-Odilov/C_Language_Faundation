#include <stdio.h>

int main(){

        int a,b;

        printf("2 ta son kiriting: ");
        scanf("%d%d", &a,&b);

        if(a > b){
         printf("%d %d", a,b);
        }else if(a < b){
         printf("%d %d", b,a);
        }else{
         printf("Ikkala son ham bir-biriga teng => %d = %d", a,b);
        }

        return 0;

}

