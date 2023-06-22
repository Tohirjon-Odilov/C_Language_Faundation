#include <stdio.h>

int main()
{

    int num;

    scanf("%d", &num);
    printf("The next number for the number %d is %d.\n", num, num + 1);
    printf("The previous number for the number %d is %d.\n", num, num - 1);

    return 0;
}