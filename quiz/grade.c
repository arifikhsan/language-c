#include <stdio.h>
#define AVERAGE(a, b, c) ((a + b + c) / 3)

void main() {
    float algebra = 3.3;
    float calculus = 3.5;
    float programming = 4;

    printf("Nilai IPK saya adalah: %.2f. \n", AVERAGE(algebra, calculus, programming));
}
