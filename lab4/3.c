#include <stdio.h>
#include <stdlib.h>

void fill_array_via_int(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        puts("Enter an integer from your keyboard: ");
        scanf("%d", &arr[i]);
    }
}

int main() {
    int arr[8] = {500};

    fill_array_via_int(&(arr[1]), 7);

    int *ptr = arr;
    int min_el_that_div_5 = *ptr;

    for (int i = 1; i < 8; i++) {
        if ((*(ptr + i) < min_el_that_div_5) && ((*(ptr + i)) % 5 == 0)) {
            min_el_that_div_5 = *(ptr + i);
        }
    }

    printf("Minimum integer value that could be devided by 5 is %d\n", min_el_that_div_5);

    return 0;
}
