#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;

    puts("Input value a, b, c, d:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }

    if (min > 0) {
        puts("Minimum value is positive.");
    } else {
        puts("Minimum value is negative.");
    }

    printf("Minimum value = %d\n", min);

    return 0;
}
