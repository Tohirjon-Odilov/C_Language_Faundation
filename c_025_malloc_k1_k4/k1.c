#include <stdio.h>
#include <stdlib.h>

typedef struct car
{
    char brand[25];
    int speed;
    int cost;
    int year;
    char color[15]; 
} CAR;

CAR create()
{
    CAR new;

    printf("Brand: ");
    getchar();
    fgets(new.brand, sizeof(new.brand), stdin);
    printf("Speed: ");
    scanf("%d",&new.speed);
    printf("Cost: ");
    scanf("%d",&new.cost);
    printf("Year: ");
    scanf("%d",&new.year);
    printf("Color: ");
    getchar();
    fgets(new.color, sizeof(new.color), stdin);
    puts("");

    return new;
}

void output(CAR new)
{
    printf("Brand: %s",new.brand);
    printf("Speed: %d\n",new.speed);
    printf("Cost: %d\n",new.cost);
    printf("Year: %d\n",new.year);
    printf("Color: %s",new.color);
    puts("");
}

int main(){

    int n;
    printf("n = ");
    scanf("%d", &n);
    
    CAR* arr = (CAR*)malloc(n * sizeof(CAR));

    if(arr == NULL || n == 0){
        printf("Error\n");
        exit(0);
    }

    for(int i = 0; i < n; i++){
        printf("Enter %d-car information\n",i+1);
        arr[i] = create();
    }

    for(int i = 0; i < n; i++){
        printf("%d-car information:\n");
        output(arr[i]);
    }

    free(arr);

    return 0;
}