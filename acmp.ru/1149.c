#include <stdio.h>

int main()
{
    int count = 0;
    char c;

    while (1) {
        scanf("%c", &c);
        if (c == '0')
            count++;

        if (c == '\n')
            break;
    }

    printf("count = %d\n", count);

    return 0;
}
