/*  Exercise number 2-8 of the book the C programming language by k&r
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

unsigned rightrot(unsigned x, int n) {
    // 8 is the char size (an unsigned is 8 char long)
    return (x >> n) | (x << (sizeof(x) * 8 - n));
}

int main() {
	//				 0b01100100000000000000000000001001
	//				 0b10010000000000000000000000100110
	unsigned value = 0b1001101001;
	unsigned mask = 0b10110;
	unsigned n = rightrot(value, 4);

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
