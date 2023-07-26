#include <stdio.h>
#include <string.h>

int main()
{
    char name[32];
    char second_name[32];
    scanf("%s", name);
    scanf("%s", second_name);

    strcpy(second_name+strlen(second_name)/2, "");
    strcpy(second_name+strlen(second_name), name+strlen(name)/2);

    puts(second_name);

    return 0;
}
