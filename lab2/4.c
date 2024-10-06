#include <stdio.h>

int main() {
    int a;
    puts("Input number from 1 to 12 to know which period is now:");
    scanf("%d", &a);

    switch (a) {
        case 2:case 3:case 4:case 5:case 6:
            puts("Spring semester");
        break;
        case 7:case 8:
            puts("Holidays");
        break;
        case 1:case 9:case 10:case 11:case 12:
            puts("Autumn semester");
        break;
        default:
            puts("Error! Please input a value between 1 and 12.");
    }

    return 0;
}
