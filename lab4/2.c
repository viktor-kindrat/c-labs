#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generation

int main() {
    const int n = 15;
    int a[n], i, count = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < n; i++) {
        a[i] = rand() % 81 - 40;
        printf("a[%d] = %d\n", i, a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            count++;
        }
    }

    printf("count of number less than 0 = %d\n", count);

    return 0;
}
