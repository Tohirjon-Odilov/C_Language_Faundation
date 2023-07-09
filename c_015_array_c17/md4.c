#include<stdio.h>
#include<stdbool.h>

bool isPrime(char h){

    if (h>=65 && h<=90){
        return true;
    }else if (h>=97 && h<=122){
        return false;
    }else {
        return false;
    }
}
int main(){

  char h;

  printf("Harf kiriting "); scanf("%c",&h); 

  printf("%c",isPrime(h));
    return 0;
}

