#include <stdio.h>
#include <string.h>

int main() {
    char *fi[] = {"Ivanneko", "Petro", "Iakovych"};

    printf(" %s\n %s\n %s\n", fi[0], fi[1], fi[2]);

    printf("Size of the array of pointers = %lu bytes\n", sizeof(fi));
    printf("Size of pointer to the 1st string = %lu bytes\n", sizeof(fi[0]));
    printf("Size of pointer to the 2nd string = %lu bytes\n", sizeof(fi[1]));
    printf("Size of pointer to the 3rd string = %lu bytes\n", sizeof(fi[2]));

    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < strlen(fi[i]); j++) {
            if (fi[i][j] == 'o' || fi[i][j] == 'O') {
                count++;
            }
        }
    }

    printf("Number of 'o's in the strings = %d\n", count);

    return 0;
}
