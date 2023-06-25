#include <stdio.h>

int main()
{
    int a,b,sum = 0;

    scanf("%d %d", &a, &b);

    sum = a * b;

    if(a >= b)
        sum = sum * a;
    if(a < b)
        sum = sum * b;
    printf("%d", sum);


    return 0;
}
