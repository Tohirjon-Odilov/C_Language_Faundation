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
    int k = 3;

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
