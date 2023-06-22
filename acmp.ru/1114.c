#include <stdio.h>

int main()
{

    int v, t, k;

    scanf("%d %d", &v, &t);
    k = ((v * t) % 109 + 109) % 109 + 1;

    printf("%d", k);

    return 0;
}