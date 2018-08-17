/*  Exercise number 2-2 of the book the C programming language by k&r
    2018 Zambon Pietro */

#include <stdio.h>

int main () {
	const int lim = 15;

	int i = 0;
	while (int i < lim-1)
		if ((c = getchar()) != '\n')
			if (c != EOF)
				++i;
	return 0;
}
