#include <stdio.h>

int main() {
    int a[6];

    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    int count_of_not_null = 0;

    for (int i = 0; i < 6; i++) {
        if (a[i] != 0) {
            count_of_not_null++;
        }
        sum += a[i];
    }

    float median = sum / count_of_not_null;

    printf("Median of sequence: %.2f\n", median);
    return 0;
}
