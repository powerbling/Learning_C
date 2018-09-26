#include<stdio.h>
#include<string.h>

#define MAXLINE 1000

char pattern[] = "prova";

int getLine(char line[], int max) {
    int c;
    int i = 0;
    while (--max > 0 && (c = getchar()) != EOF && c != '\n')
        line[i++] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}

int strrindex(const char s[], char t[]) {
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    char line[MAXLINE];
    int found = 0;

    while (getLine(line, MAXLINE) > 0)
        if (strrindex(line, pattern) >= 0) {
            printf("%s\n", line);
            found++;
        }
    return found;
}
