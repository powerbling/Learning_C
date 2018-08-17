/*  Exercise number 2-5 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include<stdio.h>
#include<ctype.h>

int any(const char s1[], const char s2[]) {
    int c;
    for (int i = 0; s2[i] != '\0'; ++i)
        for (int j = 0; s1[j] != '\0'; ++j)
            if (s1[j] == s2[i])
                return ++j;
    return -1;
}

int main() {
    char s1[] = "Una stringa di caratteri per provare la funzione.";
    /*FIXME When the array contains character that are not contained in the string to check,
            the array picks up the first value of the string so it's necessary to put an ending character*/
    const char prova[] = {'q', 0};


    int position = any(s1, prova);
    printf("%d\n", position);

    return 0;
}
