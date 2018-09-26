/*  Exercise number 3-3 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAXLEN 500 //Max length for an input string

void expand(const char s1[], char s2[]) {
    int pos = 0;

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i+1] == '-' && s1[i+2] != '\0')
            for (int j = s1[i++]; j != s1[i+1]; j++)
                s2[pos++] = j;
        else
            s2[pos++] = s1[i];

    }
    s2[pos] = '\0';
}

int main() {
    char input[] = "-a-g0-6";
    char output[MAXLEN];

    expand(input, output);
    printf("%s\n", output);
    return 0;
}
