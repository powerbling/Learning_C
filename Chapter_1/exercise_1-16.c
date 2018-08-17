/*  Exercise number 1-16 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len, max;
    char line[MAXLINE], longest[MAXLINE];
    int c;

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            if (line[len - 2] != '\n')
                while ((c = getchar()) != EOF && c != '\n')
                    len++;
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
        printf("%d, %s", max, longest);

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

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
