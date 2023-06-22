#include <stdio.h>

int main()
{

    long long int a, b, i, res = 0, sum = 0;

    scanf("%lld %lld", &a, &b);

    while (a > i)
    {
        res = i * b;
        if (res < a)
            sum = a - res;
        i++;
    }
    printf("%lld\n", sum);

    return 0;
}