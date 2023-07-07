#include<stdio.h>

int main(){
  int a;
    scanf("%i", &a);

    int y[a];
    for(int i = 0;i<a;i++){
        scanf("%d", &y[i]);
    }

    int x, count = 0;
    scanf("%d", &x);

    for(int i =0;i<a;i++){
        if(y[i]==x){
          ++count;
        }
    }

    printf("%d", count);
    return 0;
}
