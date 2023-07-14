#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int n;

    printf("n = "); scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = 1+rand()%9;
        printf("%d ", arr[i]);
    }
    puts("");
    int *sum = &arr[n];
    *sum = 0;
    for(int i = 1; i < n; i++){
        *sum += arr[i];
    }

    printf("sum = %d\n", *sum);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    puts("");

    return 0;
}
