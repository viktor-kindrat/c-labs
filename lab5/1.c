#include <stdio.h>


int main() {
    int arr[5][4];

    for (int i = 0; i < 5; i++) {
        printf("Заповнення рядка %d:\n", i + 1);

        for (int j = 0; j < 4; j++) {
            printf("Заповніть елемент матриці %d.%d = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Введана матриця: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 4; j++) {
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            if (arr[i][j] > 0 && arr[i][j] % 2 != 0) {
                sum += arr[i][j];
            }
        }

        printf("Сума %d: %d \n", j + 1, sum);
    }


    return 0;
}
