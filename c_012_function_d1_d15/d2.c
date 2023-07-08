#include <stdio.h>


long double Pow(float a, int b){
    long double total = 1;

    while(b > 0){
        total *= a;
        b--;
    }
    return total;
}

int main(){

    float a;
    int b;

    printf("Son kiriting: "); scanf("%f", &a);
    printf("Darajasini kiriting: "); scanf("%d", &b);

    printf("%Lg", Pow(a,b));

    return 0;
}
