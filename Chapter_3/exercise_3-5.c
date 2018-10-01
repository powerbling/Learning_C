/*  Exercise number 3-5 of the book the C programming language by k&r
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

int itob(int n, char s[], int b) {
    int sign = (n < 0) ? -1 : 1;

    if (b > 36)
        return -1;

    int i = 0;
    do {
        int temp = sign * (n % b);
        if (temp < 10)
            temp += '0';
        else
            temp += 'A' - 10;
        s[i++] = temp;
    } while ((n /= b) != 0);

    if (n < 0)
        s[i++] = '-';

    s[i] = '\0';
    reverse(s);

    return 0;
}


int main(int argc, char const *argv[]) {
    char s[MAXLEN];
    int number, n;

    printf("Insert the number to convert: ");
    scanf("%d", &number);
    printf("Insert the desired base: ");
    scanf("%d", &n );

    if (itob(number, s, n) == -1)
        printf("The desired base is too large\n");
    else
        printf("%s\n", s);

    return 0;
}
