#include <stdio.h>

void check_number(int n) {
    if (n % 2 == 0) {
        if (n > 0) {
            puts("Is even and more than 0");
        } else {
            puts("Is even and less than 0");
        }
    } else {
        if (n > 25) {
            puts("Is odd and more than 25");
        } else {
            puts("Is odd and less than 25");
        }
    }
}

int main() {
    int x;
    printf("Input value: ");
    scanf("%d", &x);

    check_number(x);

    return 0;
}

