/*  Exercise number 2-7 of the book the C programming language by k&r
    This exercise extends the previous exercise, adding a function to it.
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

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = x & ~(~(~0 << n) << p);
    x = (~0 ^ x) & (~(~0 << n) << p);
    return x | mask;
}

int main() {
	//				 0b0000100001
	//				 0b1000010000
	unsigned value = 0b1001101001;
	unsigned mask = 0b10110;
	unsigned n = invert(value, 4, 5);

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
