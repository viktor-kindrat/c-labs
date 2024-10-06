#include <stdio.h>

void check_if_more_than_100(int n) {
    if (n > 100) {
        printf("Number %d is greater than 100.\n", n);
    } else {
        printf("Number %d is not greater than 100.\n", n);
    }
}

int main() {
    int n;

    puts("Enter an integer: ");
    scanf("%d", &n);

    check_if_more_than_100(n);

    return 0;
}