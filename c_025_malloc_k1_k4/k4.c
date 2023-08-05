#include <stdio.h>
#include <stdlib.h>

int main(){

    int input = 0, count = 0, x = 0, check = 1, lx = 0;

    int* arr = (int*)malloc(++x * sizeof(int));

    while(input != 4){
        check = 1;
        printf("1.Yangi element qo'shish\n");
        printf("2.Elementlarni ko'rish\n");
        printf("3.O'chirish\n");
        printf("4.chiqish\n");

        scanf("%d",&input);

        if(input == 1){
            count++;
            arr = realloc(arr,x++);
            printf("Son kiriting: ");
            scanf("%d",&arr[x-2]);
        }
        else if(input == 2){
            for(int j = 0; j < count-lx; j++){
                printf("%d ",arr[j]);
            }
            puts("");
        }
        else if(input == 3){
            int a;
            printf("Qaysi sonni o'chirmoqchisiz: ");
            getchar();
            scanf("%d",&a);
            for(int k = 0; k < count && check == 1; k++){
                if(arr[k] == a){
                    check = 0;
                    for(int j = k; j < count; k++,j++){
                        arr[j] = arr[j+1];
                    }
                    lx++;
                    printf("Son o'chirildi\n");
                    arr = realloc(arr,count-2);
                    x-=1;
                }
            }
            if(check == 1){
                printf("Siz kiritgan son topilmadi\n");
            }
        }
        else if(input == 4){
            free(arr);
            exit(0);
        }
    }

    return 0;
}