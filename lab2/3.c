#include <stdio.h>

int main() {
    char s;

    while (1) {
        puts("Please input a character:");
        scanf("%c", &s);

        switch (s) {
            case 'i':
                puts("India");
            break;
            case 's':
                puts("South Corea");
            break;
            case 'c':
                puts("China");
            break;
            case 'a':
                puts("Albania, Afganistan");
            break;
            default:
                printf("Error! No counry was found\n");
        }
        fflush(stdin);
    }

    return 0;
}
