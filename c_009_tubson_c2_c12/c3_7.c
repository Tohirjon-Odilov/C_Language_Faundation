#include <stdio.h>

int main(){

    int num = 140;
    int i = 1;

    while(i <= num){
        if(!(i % 2))
            printf("%d\n", i);
        i++;
    }

}
