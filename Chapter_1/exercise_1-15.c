/*  Exercise number 1-15 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

float temp_converter (float degrees);

int main() {
    int i;

    for (i = 2; i < 300; i += 30) {
        printf("%3d %6.2f\n", i, temp_converter(i));
    }
}

float temp_converter(float d) {
    float celsius;

    celsius = (5.0 / 9.0) * (d-32.0);

    return celsius;
}
