#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct car{
  char brand[30];
  int speed;
  int cost;
  int year;
  char color[30];
}CAR;

CAR creat_car(){
  CAR new;
  printf("Car brand: "); scanf("%s", new.brand);
  printf("Car speed: "); scanf("%d", &new.speed);
  printf("Car cost: "); scanf("%d", &new.cost);
  printf("Car color: "); scanf("%s", new.color);
  return new;
}

CAR print_car(CAR car_arr){
  printf("Car brand: %s\n", car_arr.brand);
  printf("Car speed: %d\n", car_arr.speed);
  printf("Car cost: %d\n", car_arr.cost);
  printf("Car color: %s\n", car_arr.color);
}

int main()
{
	int n;
	scanf("%d", &n);
	CAR *car_arr = malloc(n*sizeof(CAR));

	for(int i = 0; i < n; i++){
		car_arr[i] = creat_car();
	}

	for(int i = 0; i < n; i++){
		print_car(car_arr[i]);
	}

	return 0;
}
