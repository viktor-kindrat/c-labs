#include <stdio.h>
#include <stdlib.h>

#define LINE(val) printf("\n================ %s =================\n", val);

const long long MAXIMUM_OF_SHORT = 32767;
const long long MINIMUM_OF_SHORT = -32768;

const long long MAXIMUM_OF_INT = 2147483647;

const long long MAXIMUM_OF_CHAR = 127;
const long long MINIMUM_OF_CHAR = -128;

const long long MAXIMUM_OF_UNSIGNED_SHORT = MAXIMUM_OF_SHORT * 2 + 1;
const long long MAXIMUM_OF_UNSIGNED_CHAR = MAXIMUM_OF_CHAR * 2 + 1;
const long long MAXIMUM_OF_UNSIGNED_INT = MAXIMUM_OF_INT * 2 + 1;
const int MINIMUM_OF_UNSIGNED = 0;

void task1();
void task2();
void task3();
void task4();
void task5();

int main() {
    short a1 = 32767, a2, a3;  // Цілi зі знаком (signed integers)
    char b1 = 127, b2, b3;     // Цілi зі знаком (signed characters)
    int c1 = 2147483647, c2, c3;  // Цілi зі знаком (signed integers)

    LINE("DEFAULT")
    a2 = a1 + 1;
    a3 = a1 + 2;
    printf("short value: %d %d %d\n", a1, a2, a3);

    b2 = b1 + 1;
    b3 = b1 + 2;
    printf("char value: %d %d %d\n", b1, b2, b3);

    c2 = c1 + 1;
    c3 = c1 + 2;
    printf("int value: %d %d %d\n", c1, c2, c3);

    task1();
    task2();
    task3();
    task4();
    task5();

    system("pause");
    return 0;
}

void task1() {
    LINE("TASK 1")
    short x1 = 32763, x2, x3;
    unsigned short y1 = 65531, y2, y3;
    char z1 = 122, z2, z3;
    unsigned char v1 = 2, v2, v3;

    x2 = x1 + (MAXIMUM_OF_SHORT - x1);
    y2 = y1 + (MAXIMUM_OF_UNSIGNED_SHORT - y1);
    z2 = z1 + (MAXIMUM_OF_CHAR - z1);
    v2 = v1 + (MAXIMUM_OF_UNSIGNED_CHAR - v1);

    x3 = x2 + 1;
    y3 = y2 + 1;
    z3 = z2 + 1;
    v3 = v2 + 1;

    printf("%d %d\n", x2, x3);
    printf("%d %d\n", y2, y3);
    printf("%d %d\n", z2, z3);
    printf("%d %d\n", v2, v3);
}

void task2() {
    LINE("TASK 2")
    short x1 = -32763, x2, x3;
    unsigned short y1 = 31, y2, y3;
    char z1 = -120, z2, z3;
    unsigned char v1 = 20, v2, v3;

    x2 = x1 - (MINIMUM_OF_SHORT + x1);
    y2 = y1 - (MINIMUM_OF_UNSIGNED + y1);
    z2 = z1 - (MINIMUM_OF_CHAR + z1);
    v2 = v1 - (MINIMUM_OF_UNSIGNED + v1);

    x3 = x2 - 1;
    y3 = y2 - 1;
    z3 = z2 - 1;
    v3 = v2 - 1;

    printf("%d %d\n", x2, x3);
    printf("%d %d\n", y2, y3);
    printf("%d %d\n", z2, z3);
    printf("%d %d\n", v2, v3);
}

void task3() {
    LINE("TASK 3")
    short x1 = 30, x2, x3;
    unsigned short y1 = 35000, y2, y3;
    char z1 = -25, z2, z3;
    unsigned char v1 = 20, v2, v3;

    x2 = x1 + (MAXIMUM_OF_SHORT - x1);
    y2 = y1 + (MAXIMUM_OF_UNSIGNED_SHORT - y1);
    z2 = z1 + (MAXIMUM_OF_CHAR - z1);
    v2 = v1 + (MAXIMUM_OF_UNSIGNED_CHAR - v1);

    x3 = x2 + 1;
    y3 = y2 + 1;
    z3 = z2 + 1;
    v3 = v2 + 1;

    printf("%d %d\n", x2, x3);
    printf("%d %d\n", y2, y3);
    printf("%d %d\n", z2, z3);
    printf("%d %d\n", v2, v3);
}

void task4() {
    LINE("TASK 4")
    short x1 = -32000, x2, x3;
    unsigned short y1 = 65530, y2, y3;
    char z1 = -108, z2, z3;
    unsigned char v1 = 240, v2, v3;

    x2 = x1 - (MINIMUM_OF_SHORT + x1);
    y2 = y1 - (MINIMUM_OF_UNSIGNED + y1);
    z2 = z1 - (MINIMUM_OF_CHAR + z1);
    v2 = v1 - (MINIMUM_OF_UNSIGNED + v1);

    x3 = x2 - 1;
    y3 = y2 - 1;
    z3 = z2 - 1;
    v3 = v2 - 1;

    printf("%d %d\n", x2, x3);
    printf("%d %d\n", y2, y3);
    printf("%d %d\n", z2, z3);
    printf("%d %d\n", v2, v3);
}

void task5() {
    LINE("TASK 5")
    int x1 = 2147483645, x2, x3;
    unsigned int y1 = 4294967290, y2, y3;
    char z1 = 125, z2, z3;
    unsigned char v1 = 252, v2, v3;

    x2 = x1 + (MAXIMUM_OF_INT - x1);
    y2 = y1 + (MAXIMUM_OF_UNSIGNED_INT - y1);
    z2 = z1 + (MAXIMUM_OF_CHAR - z1);
    v2 = v1 + (MAXIMUM_OF_UNSIGNED_CHAR - v1);

    x3 = x2 + 1;
    y3 = y2 + 1;
    z3 = z2 + 1;
    v3 = v2 + 1;

    printf("%i %i\n", x2, x3);
    printf("%u %u\n", y2, y3);
    printf("%d %d\n", z2, z3);
    printf("%d %d\n", v2, v3);
}