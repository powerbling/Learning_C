/*  Exercise number 2-4 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>
#include<ctype.h>

void squeeze(char s[], const char toremove[]) {
    int c;

    for (int i = 0; (c = toremove[i]) != '\0'; ++i) {
        int k = 0;
        for (int j = 0; s[j]; ++j)
            if (s[j] != c)
                s[k++] = s[j];
        s[k] = '\0';
    }
}

int main() {
    char s[] = "Una stringa di caratteri";
    char p[2] = {'t', 'a'};

    squeeze(s, p);
    printf("%s\n", s);
    return 0;
}
