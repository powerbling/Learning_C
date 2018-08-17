/*  Exercise number 1-21 of the book the C programming language by k&r
    **NOT FINISHED**
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

    state 
    for (i = 0; i < len; ++i) {
        if (s[i] == ' ' && state == OUT) {
            s[i] = '\t';
            state = IN;
        } else if (s[i] == ' ' && state == IN)  {
            for (j = i; j < len; ++j)
            s[j] = s[j+1];
        }
    }


        for (i = 0; i < len; ++i) {
            if (s[i] == '\t')
                s[i] = 't';
            if (s[i] == ' ')
                s[i] = 's';

        }

}
