#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 4

int main() {
    float arr[ROWS][COLS];
    int count = 0;
    srand((unsigned int)time(NULL));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = 10.50f + (rand() / (float)RAND_MAX) * 20.0f;
        }
    }

    puts("Array:");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%8.2f ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > 15.5f) {
                count++;
            }
        }
    }

    printf("Number of elements greater than 15.5: %d\n", count);

    return 0;
}
