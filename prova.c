#include<stdio.h>
#include<ctype.h>

int main() {
	signed x = ~0;
	signed n;
	while (x != 0) {
		x &= (x-1);
		printf("%d\n", x);
		n = x;
		while (n) {
		    if (n & 1)
		        printf("1");
		    else
		        printf("0");

		    n >>= 1;
		}
		printf("\n");
	}
	return 0;
}
