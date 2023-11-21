#include <stdio.h>

#define QUBE(x) ((x) * (x) * (x))
#define MAX(y,z) ((y) > (z) ? (y) : (z))
#define MIN(y,z) ((y) < (z) ? (y) : (z))
#define SQR(x) ((x) * (x))
#define Z_GREATER_THAN_5(x) (x > 5)
#define PRINTI(w) puts("control output"); \
                 printf(#w "=%d\n", w)

#define PRINTR(w) puts("result :"); \
                 printf(#w "=%f\n", (float)w)

int main() {
    puts("Lab 13.2. Using macros and preprocessing directive");
    int x, y, z, min, y_cube, max, max_sqr;

    puts("Input 3 integer numbers");
    scanf_s("%d", &x);
    PRINTI(x);
    scanf_s("%d", &y);
    PRINTI(y);
    scanf_s("%d", &z);
    PRINTI(z);

#if (Z_GREATER_THAN_5(z))
    y_cube = QUBE(y);
    PRINTI(y_cube);
    max = MAX(x * QUBE(y), x * y + z);
    PRINTI(max);
    max_sqr = SQR(max);
    PRINTR(max_sqr);
#else
    min = MIN(x - y * z, x * y + z);
    PRINTR(min);
#endif
    return 0;
}


