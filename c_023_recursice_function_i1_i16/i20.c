#include <stdio.h>
#include <stdlib.h>

void isPrime(int a, int i)
{
    if (a <= 1)
    {
        printf("tub eams\n");
        exit(0);
    }

    if (i * i <= a)
    {
        if (a % i == 0)
        {
            printf("tub emas\n");
            exit(0);
        }
        isPrime(a, i + 1);
    }
    if (isPrime)
    {
        printf("tub son\n");
        exit(0);
    }
    else
    {
        printf("tub emas\n");
        exit(0);
    }
}

int main()
{

    int a, i = 2;
    printf("sonni kiriting: ");
    scanf("%d", &a);

    isPrime(a, i);

    return 0;
}