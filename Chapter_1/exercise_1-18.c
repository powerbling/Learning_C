/*  Exercise number 1-18 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];


    while ((len = getLine(line, MAXLINE)) > 0) {
        printf("%s", line);
    }
    return 0;
}


int getLine(char s[], int lim) {
    int c, i, last;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
        if (c != ' ' && c != '\t')
            last = i;
    }
    ++last;
    s[last] = '\n';
    ++last;
    s[last] = '\0';
    return last;
}
