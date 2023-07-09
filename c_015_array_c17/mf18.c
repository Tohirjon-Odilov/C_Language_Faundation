#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arrNumber(int array[], int n){
   for(int i = 0; i < n; i++){
    array[i] = - 15 + rand() % 26;
  }
}
int output(int arr[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  puts("");
}

void nextNumber(int arr[], int n){
  int num = arr[n - 1];
  int num2 = arr[0];
  for(int i = n; i > 0; i--){ //shuni ko'ring
    arr[i] = arr[i - 1]; 
//    arr[n =- 1];
  }
  arr[0] = num;
}

int main(){
  srand(time(NULL));
  int n;
  scanf("%d", &n);

  int arr[n];
  arrNumber(arr, n);
  output(arr, n);
  nextNumber(arr, n);
  output(arr, n);
  return 0;
}
