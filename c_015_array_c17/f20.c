#if 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shiftArray(int *arr, int n, int k) {
    int temp, i, j;

    for (i = 0; i < k; i++) {
        temp = arr[n - 1];

        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }
}

int main() {
    int n;
	scanf("%d", &n);
    int array[n];
    int k = 4;

    // Random sonlar bilan seriyani to'ldirish
    srand(time(0));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 81 - 11;  // -11 dan 70 gacha random sonlar
    }

    // Seriyani ekranga chiqarish
    printf("Input: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    puts("");
    // Seriyani o'ngga kta elementga surish
    shiftArray(array, n, k);

    // Natijani ekranga chiqarish
    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n, k = 1;
	scanf("%d", &n);
	int arr[n];
	scanf("%d", &k);
	int new_arr[k];
	int j = 0;

	for(int i = 0; i < n; i++){
		arr[i] = 8 + rand() % 13;
		printf("%d ", arr[i]);
	}
	puts("");

	for(int i = n; i > k; i--){
		if(n > n-k) new_arr[j++] = arr[n-1];
	}



	for(int i = n; i > k-1; i--) arr[i] = arr[i-k];

	j = 0;
	for(int i = 0; i < k; i++) printf("%d", new_arr[i]);
	puts("");

//	for(int i = 0; i < k; i++){
//		arr[i] = new_arr[j++];
//	}

	for(int i = 0; i < n; i++) printf("%d ", arr[i]);


	return 0;
}
#endif
