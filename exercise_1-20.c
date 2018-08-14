/*  Exercise number 1-20 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

#define MAXLINE 1000
#define TABLEN 8


int getLine(char string[], int limit);
void detab(char toModify[], int lenght);


int main() {
    int len;
    char temp[MAXLINE];


    while ((len = getLine(temp, MAXLINE))) {
        detab(temp, len);
        printf("%s", temp);
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

void detab(char s[], int len) {
    int i, j, spaces;

    for (i = 0; i < len; ++i) {
        spaces = 0;
        if (s[i] == '\t') {
            spaces = TABLEN - (i % TABLEN);
            for (j = len; j > i; --j)
                s[j+spaces-1] = s[j];
            for (j = i; j < i+spaces; ++j)
                s[j] = ' ';
            len += spaces;
        }
    }
}
