/*  Exercise number 2-6 of the book the C programming language by k&r
    This exercise extends the example found in the chapter 2.9 of the book
    2018 Zambon Pietro */

#include<stdio.h>
#include<ctype.h>

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	y = (y & ~(~0 << n)) << p;
	x = x & ~(~(~0 << n) << p);

	return x | y;
}

int main() {
	unsigned value = 0b1000011110;
	unsigned mask = 0b10110;
	unsigned n = setbits(value, 4, 3, mask);

	printf("%u\n", n);

	//NOTE This loop is needed to print the value in binary but the value is mirrored.
	while (n) {
	    if (n & 1)
	        printf("1");
	    else
	        printf("0");

	    n >>= 1;
	}
	printf("\n");

	return 0;
}
