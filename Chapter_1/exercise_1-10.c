/*  Exercise number 1-10 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
            c = 0;
        } else if (c == '\b') {
            printf("\\b");
            c = 0;
        } else if (c == '\\') {
            printf("\\\\");
            c = 0;
        }
        putchar(c);
    }

}
