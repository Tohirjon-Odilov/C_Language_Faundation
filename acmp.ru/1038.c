#include <stdio.h>

int main()
{

    int num;

    scanf("%d", &num);
    if (num % 10)
        num = (num / 10) + 1;
    else
        num /= 10;
    printf("%d", num);

    return 0;
}