/*  Exercise number 3-2 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>

#define MAXLINE 1000 // Maximum size for a string

void escape (const char s[], char t[]) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; ++i)
        switch (s[i]) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j++] = s[i];
        }
    t[j] = '\0';
}



int main() {
    char string[MAXLINE] = "Una stringa di caratteri\nCon dei tab\t\t.";
    char second_string[MAXLINE];

    escape(string, second_string);
    printf("%s\n%s\n", string, second_string);

    return 0;
}
