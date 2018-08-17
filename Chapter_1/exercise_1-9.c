/*  Exercise number 1-9 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ') ;
            putchar(' ');
        }
        putchar(c);
    }
}
