#include <stdio.h>

int main() {
    int sum_of_more_than_5 = 0, count_of_more_than_5 = 0;
    int max;

    for (int i = 1; i <= 10; i++) {
        int current;
        printf("Input a number %d:\n", i);
        scanf("%d", &current);

        if (current == 10) {
            if (i == 1) {
                max = 10;
            }
            break;
        }

        if (current > 5) {
            sum_of_more_than_5 += current;
            count_of_more_than_5++;
        }

        if (current > max) {
            max = current;
        }
    }

    printf("Max number is = %d\n", max);
    printf("Sum of more than 5 = %d\n", sum_of_more_than_5);
    printf("Count of more is = %d\n", count_of_more_than_5);

    return 0;
}
