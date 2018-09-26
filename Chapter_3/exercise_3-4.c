/*  Exercise number 3-4 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>
#include<string.h>

#define MAXLEN 250

void reverse(char s[]) {
    for (int i = 0, j = strlen(s) - 1, c; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa (int n, char s[]) {
    int sign = (n < 0) ? -1 : 1;

    int i = 0;
    do {
        s[i++] = sign * (n % 10) + '0';
    }   while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int main() {
    signed long number = ~0U << 31;
    char number_string[MAXLEN];

    itoa(number, number_string);
    printf("%s\n", number_string);

    return 0;
}
