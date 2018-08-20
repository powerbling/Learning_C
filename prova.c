/*  Exercise number 2-8 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>
#include<ctype.h>

int lower (int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main() {
    char stringa[] = "Una striNgA Di carAttErI";

    int i = 0;
    while (stringa[i] != '\0') {
        stringa[i] = lower(stringa[i++]);
    }
    printf("%s\n", stringa);


    return 0;
}
