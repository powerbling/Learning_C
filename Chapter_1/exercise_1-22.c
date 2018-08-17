/*  Exercise number 1-22 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

#define MAXLINE 1000    //Max length for the input cahr array
#define FOLDLEN 40      //Length for the longer lines to fold at

int smartline(char line[], int maxline);    //Gets the input line, name changed from getline
void foldline(char toChange[], int length); //Custom function to fold long lines at a certain amount of columns

int main () {
    int len;
    char temp[MAXLINE];


    while ((len = smartline(temp, MAXLINE)) > 0) {
        foldline(temp, len);
        printf("\n%s\n", temp);
    }


    return 0;
}


//  Smartline: reads a line from the input and returns it's length
int smartline(char s[], int lim) {
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

//  Foldline: folds the line after the last non-blank and after a certain column
void foldline(char s[], int len) {
    int i, lastFold, k;

    if (len < FOLDLEN)
        return;

    lastFold = FOLDLEN;
    for (i = 0; i <= len; ++i) {
        if (i >= lastFold) {
            for (k = i; k >= lastFold - FOLDLEN; --k) {
                if ((s[k] == ' ' || s[k] == '\t') && s[k-1] != ' ' && s[k-1] != '\t') {
                    s[k] = '\n';
                    break;
                } //TODO Add longword split
            }
            lastFold += FOLDLEN;
        }
    }
    return;
}
