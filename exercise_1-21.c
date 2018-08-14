/*  Exercise number 1-21 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

#define MAXLINE 1000
#define TABLEN 8
#define IN 1
#define OUT 0


int getLine(char string[], int limit);
void entab(char toModify[], int lenght);


int main() {
    int len;
    char temp[MAXLINE];


    while ((len = getLine(temp, MAXLINE))) {
        entab(temp, len);
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


//TODO set up properly this function and find the right algorythm
void entab(char s[], int len) {
    int i, j, spaces, state;

    for (i = 0; i < len; ++i)
        if (s[i] == ' ') {
            state = IN;
            ++spaces;
        } else if (state == IN) {
            if (((i-1) % TABLEN) == 0) {
                s[i-spaces-1] = '\t';
                for (j = i-spaces; j < i; ++j){
                    s[j] = s[j+6];
                }
            len -= spaces;
            i -= spaces;
            }
        }
            state = OUT;

}
