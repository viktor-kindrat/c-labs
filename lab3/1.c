#include <stdio.h>

int main() {
    int sum = 0;
    int num = 0;
    int cycles = 0;

    while (num <= 21) {
        num += 3;
        sum += num;
        cycles++;
    }

    printf("Summa: %d\n", sum);
    printf("Last number: %d\n", num);
    printf("Cycles: %d\n", cycles);

    return 0;
}
