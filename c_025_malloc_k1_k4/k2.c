#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int input, i = 1, count = 0;
    float max, min, medium;
    float* arr = (float*)malloc(i * sizeof(float));
    
    if(arr == NULL){
        printf("Error\n");
        exit(0);
    }

    system("clear");

    while(true){

        if(count != 0){
            printf("Siz kiritgan malumotlar >>> ");
            for(int h = 0; h < count; h++){
                printf("|%g ",arr[h]);
            }
            puts("");
        }

        printf("Soat 0%d:00 dagi ob-havo malumotni kiriting\n\n",count);

        printf("Haroratni kiritish >>> 1\n");
        printf("Eng yuqori haroratni bilish >>> 2\n");
        printf("O'rtacha haroratni bilish >>> 3\n");
        printf("Eng past haroratni bilish >>> 4\n");
        printf("Chiqish >>> 5\n");

        printf("\nQaysi birini tanlaysiz >>> ");
        scanf("%d",&input);

        if(input == 1){
            system("clear");
            count++;
            arr = realloc(arr, i++);
            printf("\nHaroratni kiriting: ");
            scanf("%f",&arr[i-2]);
            puts("");
            system("clear");
        }
        else if(input == 2){
            system("clear");
            if(count == 1){
                printf("\nEng yuqori harorat---> %g C\n",arr[0]);
            }
            else if(count == 0){
                printf("\nSiz harorat kiritmagansiz\n");
            }
            else{
                max = arr[0];
                for(int j = 1; j < count; j++){
                    if(max < arr[j]){
                        max = arr[j];
                    }
                }
                printf("\nEng yuqori harorat---> %g C\n",max);
            }
            puts("");
        }
        else if(input == 3){
            system("clear");
            if(count == 1){
                printf("\nO'rtacha harorat---> %g C\n",arr[0]);
            }
            else if(count == 0){
                printf("\nSiz harorat kiritmagansiz\n");
            }
            else{
                medium = 0;
                for(int j = 0; j < count; j++){
                    medium+=arr[j];
                }
                printf("\nO'ratcha harorat---> %g C\n",(float)medium/count);
            }
            puts("");
        }
        else if(input == 4){
            system("clear");
            if(count == 1){
                printf("\nEng past harorat---> %g C\n",arr[0]);
            }
            else if(count == 0){
                printf("\nSiz harorat kiritmagansiz\n");
            }
            else{
                min = arr[0];
                for(int j = 1; j < count; j++){
                    if(min > arr[j]){
                        min = arr[j];
                    }
                }
                printf("\nEng past harorat---> %g C\n",min);
            }
            puts("");
        }
        else if(input == 5){
            system("clear");
            free(arr);
            break;
        }
        else{
            printf("Error!\n");
            exit(1);
        }
    }

    return 0;
}