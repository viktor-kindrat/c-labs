#include <stdio.h>

int main() {
    for (int a = 4; a <= 20; a += 2) {
        for (int b = 3; b <= 21; b += 3) {
            int operation_res = a * a + b * b;

            printf("%d^2 + %d^2 = %d\n", a, b, operation_res);
        }
    }

    return 0;
}
