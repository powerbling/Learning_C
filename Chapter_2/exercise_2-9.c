/*  Exercise number 2-9 of the book the C programming language by k&r
    2018 Zambon Pietro */

/*  Explaination:
    The rightmost 1 bit is turned to 0 because subtracting 1 shifts right
    the bit after a 0 and substitutes it with a 1, then performing a
    bitwise AND turns to 0 the shifted value and the others before.
    For example:
    111111111 &
    111111110 = 111111100

    111111100 &
    111111011 = 111111000
    and so on.

    This works with bit patterns too:
    100111001 &
    100111000 = 100111000

    100111000 &
    100110111 = 100110000
    effectively deleting the rightmost 1 bit. */

#include<stdio.h>
#include<ctype.h>

int main() {
	signed x = 0b1111111;
	int b = 0;
	while (x != 0) {
		x &= (x - 1);
		++b;
		printf("%d%7d\n", x, b);
	}

    printf("The number of 1 bits is %d\n", b);
	return 0;
}
