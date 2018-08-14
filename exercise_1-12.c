/*  Exercise number 1-12 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            c = '\n';
        }
        putchar(c);
    }
}
