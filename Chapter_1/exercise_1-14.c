/*  Exercise number 1-14 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

#define LENGTH 'z' - 'a' + 1

int main() {
    int c, i, j;
    int characters[LENGTH];

    for (i = 0; i < LENGTH; ++i)
        characters[i] = 0;

    while ((c = getchar()) != EOF) {
        if ('a' <= c && 'z' >= c)
            ++characters[c - 'a'];
    }

    for (i = 0; i < LENGTH; ++i) {
        putchar('a' + i);
        printf(": ");
        for (j = 1; j <= characters[i]; ++j)
            printf("#");
        printf("\n");
    }

}
