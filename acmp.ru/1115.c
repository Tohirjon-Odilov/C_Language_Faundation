#include <stdio.h>

int main()
{

    int n, k, a, f, x, l;

    scanf("%d %d", &n, &k);
    a = k / n;
    f = k % n;
    x = n - f;
    l = x % n;
    printf("%d %d %d", a, f, l);
    return 0;
}