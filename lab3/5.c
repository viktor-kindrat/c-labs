#include <stdio.h>
#include <math.h>

int main() {
    int totalInputs = 0;
    const int maxInputs = 12;

    for (int i = 1; i <= 5; i++) {
        double x;
        int kol = 0;

        do {
            puts("Input value 0 <= x <= 2PI:");
            scanf("%lf", &x);

            if (x >= 0 && x <= 2 * M_PI) {
                printf("sin(%.2f) = %8.5f\n", x, sin(x));
                printf("cos(%.2f) = %8.5f\n", x, cos(x));
                kol++;
                totalInputs++;
            } else {
                puts("Input is out of range! Please enter a value between 0 and 2PI.");
            }

            if (totalInputs >= maxInputs) {
                return -1;
            }

        } while (kol < 1);
    }

    printf("Total valid inputs entered: %d\n", totalInputs);
    return 0;
}
