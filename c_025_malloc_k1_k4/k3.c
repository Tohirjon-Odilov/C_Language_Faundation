#include <stdio.h>
#include <stdlib.h>

int main(){

    int* arr = (int*)malloc(1 * sizeof(int));
    printf("Son kiriting: ");
    scanf("%d",&arr[0]);

    int n = 1;
    char is_input;
    for(int i = 0; i < n; i++){
        printf("Son kiritasizmi?(y/n)");
        getchar();
        scanf("%c",&is_input);
        if(is_input == 'y'){
            n++;
            arr = realloc(arr,sizeof(n));
            printf("Son kiriting: ");
            scanf("%d",&arr[i+1]);
            continue;
        }
        else if(is_input == 'n'){
            printf("Siz kiritgan sonlar\n");
            for(int i = 0; i < n; i++){
                printf("%d ",arr[i]);
            }
            free(arr);
            break;
        }
    }

    return 0;
}