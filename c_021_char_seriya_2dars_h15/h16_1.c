#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char a[100];
    fgets(a, sizeof(a), stdin);
    int nums = 0, lower = 0, upper = 0, punc = 0;

    for(int i = 0; a[i] != '\0'; i++){
        if(isdigit(a[i]))
                nums = 1;
        else if(islower(a[i]))
                lower = 1;
        else if(isupper(a[i]))
                upper = 1;
        else if(ispunct(a[i]))
                punc = 1;
    }

    if(strlen(a) >8 && nums && lower && upper && punc)
        printf("YES");
    else
        printf("NO");

    return 0;
}
