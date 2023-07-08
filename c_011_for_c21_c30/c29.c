#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);

    for(int i = 1, daraja; daraja < a; i++){
        daraja = 1;
        for(int j = 0; j < i; j++){
            daraja *= 3;
        }
        b = i;
    }

    printf("%d\n", b - 1);
    return 0;
}
