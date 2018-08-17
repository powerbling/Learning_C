/*  Exercise number 2-3 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>
#include<math.h>
#include<ctype.h>


long htoi(long hex) {
    int count;
    int n = hex;
    while (n != 0) {
        n /= 10;
        ++count;
    }

    int mask = pow(16, count);

    long dec = hex % mask;
    return dec;
}

int main() {
    long value = 0x0;

    printf("Decimal value: %d\n", htoi(value));
    return 0;
}
