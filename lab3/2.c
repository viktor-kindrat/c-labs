#include <stdio.h>

int main() {
    int num, sum = 0, count = 0, totalNumbers, i;

    printf("Введіть загальну кількість чисел: ");
    scanf("%d", &totalNumbers);

    for (i = 0; i < totalNumbers; i++) {
        printf("Введіть число: ");
        scanf("%d", &num);

        if (num == -11) {
            printf("Введено число -11, завершення циклу.\n");
            break;
        }

        if (num > 0 && num % 2 != 0) {
            sum += num;
            count++;
        }
    }

    printf("Сума додатних непарних чисел: %d\n", sum);
    printf("Кількість додатних непарних чисел: %d\n", count);

    return 0;
}
