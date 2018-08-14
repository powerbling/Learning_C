/*  Exercise number 1-13 of the book the C programming language by k&r
    Vertical execution
    2018 Zambon Pietro */

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, i, j, nc, state, height;
    int words[15];

    state = IN;
    nc = 0;
    for (i = 0; i < 15; ++i)
        words[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            ++words[nc];
            nc = 0;
        } else if (state == OUT)
            state = IN;
        if (state == IN)
            ++nc;
    }

    for (i = 0; i < 15; ++i)
        if (words[i] > height)
            height = words[i];


    for (i = height; i > 0; --i) {
        printf("%2d", i);
        for (j = 0; j < 15; ++j)
            if (words[j] >= i)
                printf("%3s", "#");
            else
                printf("%3s", " ");
        printf("\n");
    }

    printf("%2s", " ");
    for (i = 0; i < 15; ++i){
        printf("%3d", i);
    }
    printf("\n");

}
