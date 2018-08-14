/*  Exercise number 1-19 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>
#define MAXLINE 1000

int getLine(char string[], int limit);
void reverse(char string[], int limit);

int main() {
    int len;
    char line[MAXLINE];


    while ((len = getLine(line, MAXLINE)) > 0) {
        reverse(line, len);
        printf("%s", line);
    }
    return 0;
}


int getLine(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[], int lim) {
    int i, k;
    char temp;

    for (i = 0; i < lim; ++i)
        if (s[i] == '\n') {
            s[i] = 0;
            --lim;
        } else if (s[i] == '\0') {
            s[i] = 0;
            --lim;
        }

    k = lim-1;

    for (i = 0; i < lim; ++i) {
        temp = s[k];
        s[k] = s[i];
        s[i] = temp;
        --k;
        if (k == ((lim / 2)-1))
            break;
    }

    s[lim] = '\n';
    s[lim+1] = '\0';
}
