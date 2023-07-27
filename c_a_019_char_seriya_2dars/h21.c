#include <stdio.h>
#include <windows.h>

int main()
{
    char x[100];
    int res = scanf("%s", x);
    if (res == EOF) {
        puts("tugadi");
    }
    else
	bee(200,200);
//        printf("\a%s", x);

    return 0;
}
