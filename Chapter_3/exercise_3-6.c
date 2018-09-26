/*  Exercise number 3-6 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>
#include<string.h>

#define MAXLEN 500

void reverse(char s[]) {
    for (int i = 0, j = strlen(s) - 1, c; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itob(int n, char s[], int b) {
    int sign = (n < 0) ? -1 : 1;

    int i = 0;
    do {
        int temp = sign * (n % b);
        if (temp > 10) {
            temp += 'A' - 10;
            s[i++] = temp;
        } else
            s[i++] = temp + '0';
    } while ((n /= b) != 0);

    if (n < 0)
        s[i++] = '-';

    reverse(s);

    s[i] = '\0';
}

int main() {
    char s[MAXLEN];
    int number = 1;

    itob(number, s, 2);
    printf("%s\n", s);

    return 0;
}
