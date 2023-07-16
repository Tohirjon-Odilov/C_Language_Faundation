#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fill_array(int arr[], int a){
    for(int i = 0; i < a; i++){
        arr[i] = -15 + rand() % 36;
    }
}

void output(int arr[], int a){
    for(int i = 0; i < a; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}

void bouble_sort(int arr[], int a){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sort_positiv(int arr[], int a){
    int arr_pos[a];
    int count_pos = 0;
    for(int i = 0, h = 0; i < a; i++){
        if(arr[i] > 0){
            arr_pos[h++] = arr[i];
            count_pos++;
        }
    }
    for(int i = 0; i < count_pos; i++){
       for(int j = 0; j < count_pos-i-1; j++){
           if(arr_pos[j] < arr_pos[j+1]){
               int temp = arr_pos[j];
               arr_pos[j] = arr_pos[j+1];
               arr_pos[j+1] = temp;
           }
       }
    }
	for(int i = a-count_pos, j = 0; i < a; i++,j++){
		arr[i] = arr_pos[j];
	}
    output(arr,a);
}

int main(){

    srand(time(NULL));

    int a;
    printf("a = "); scanf("%d", &a);

    int arr[a];

    fill_array(arr,a);
    output(arr,a);
    bouble_sort(arr,a);
    sort_positiv(arr,a);

    return 0;
}




















#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	puts("");
}

void fill_arr(int arr[], int n){
	for(int i = 0; i < n; i++)
		arr[i] = rand() % 25 - 5;
	output(arr,n);
}

void sort(int arr[], int n);

void get_negative(int arr[], int n){
	int n = 0;
	int neg_arr[n];
	for(int i = 0; i < n; i++){
		if(arr[i] < 0) neg_arr
	}
}

void sort(int arr[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	output(arr,n);
}

int main()
{
	srand(time(0));

	int n;
	scanf("%d", &n);
	int arr[n];

	fill_arr(arr,n);
	sort(arr,n);

	return 0;
}
#endif
