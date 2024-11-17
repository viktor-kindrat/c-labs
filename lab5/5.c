#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, N;

    // Введення розміру матриці
    printf("Input the size of the square matrix: ");
    scanf("%d", &N);

    // Виділення пам'яті для матриці matr
    int **matr = (int**)malloc(N * sizeof(int*));
    if (matr == NULL) {
        puts("Error! Memory not allocated.");
        return -1;
    }
    for (i = 0; i < N; i++) {
        matr[i] = (int*)malloc(N * sizeof(int));
        if (matr[i] == NULL) {
            puts("Error! Memory not allocated.");
            return -2;
        }
    }

    // Введення елементів матриці matr
    puts("\nInput the elements of the matrix matr:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matr[i][j]);
        }
    }

    // Виведення матриці matr
    puts("\n\tMatrix matr:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%8d", matr[i][j]);
        }
        printf("\n");
    }

    // Виділення пам'яті для матриці mas
    int **mas = (int**)malloc(N * sizeof(int*));
    if (mas == NULL) {
        puts("Error! Memory not allocated.");
        return -1;
    }
    for (i = 0; i < N; i++) {
        mas[i] = (int*)malloc(N * sizeof(int));
        if (mas[i] == NULL) {
            puts("Error! Memory not allocated.");
            return -2;
        }
    }

    // Ініціалізація генератора випадкових чисел
    srand((unsigned)time(NULL));

    // Заповнення масиву mas випадковими числами від -50 до 50
    puts("\n\tMatrix mas:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            mas[i][j] = rand() % 101 - 50; // випадкове число від -50 до 50
            printf("%8d", mas[i][j]);
        }
        printf("\n");
    }

    // Виділення пам'яті для третьої матриці maxMat
    int **maxMat = (int**)malloc(N * sizeof(int*));
    if (maxMat == NULL) {
        puts("Error! Memory not allocated.");
        return -1;
    }
    for (i = 0; i < N; i++) {
        maxMat[i] = (int*)malloc(N * sizeof(int));
        if (maxMat[i] == NULL) {
            puts("Error! Memory not allocated.");
            return -2;
        }
    }

    // Порівняння елементів перших двох матриць і занесення найбільшого у maxMat
    puts("\nNew matrix maxMat (largest values from matr and mas):");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matr[i][j] > mas[i][j]) {
                maxMat[i][j] = matr[i][j];
            } else {
                maxMat[i][j] = mas[i][j];
            }
            printf("%8d", maxMat[i][j]);
        }
        printf("\n");
    }

    // Звільнення пам'яті
    for (i = 0; i < N; i++) {
        free(matr[i]); // звільнення пам'яті з-під рядків matr
        free(mas[i]);  // звільнення пам'яті з-під рядків mas
        free(maxMat[i]);  // звільнення пам'яті з-під рядків maxMat
    }
    free(matr); // звільнення пам'яті з-під масиву покажчиків matr
    free(mas);  // звільнення пам'яті з-під масиву покажчиків mas
    free(maxMat); // звільнення пам'яті з-під масиву покажчиків maxMat

    return 0;
}
