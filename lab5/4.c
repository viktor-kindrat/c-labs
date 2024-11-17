#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    long *arr;

    printf("Input size of the array: ");
    scanf("%d", &n);

    arr = (long*)malloc(n * sizeof(long));

    if (arr == NULL) {
        printf("Error! Memory not allocated.\n");
        return -1;
    }

    srand((unsigned)time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10001 - 5000; // від -5000 до +5000
    }

    printf("\nGenerated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
