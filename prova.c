#include <stdio.h>

#define MAXLINE 250

void reverse(char s[]) {
	int i, j, t;

	for (j = 0; s[j] != '\0'; j++)
		;
	for (i = 0, --j; j > i; i++, j--) {
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}
}

void itob(int n, char s[], int b) {
	int i, sign, r;

	sign = n;
	i = 0;
	do {
		r = n % b;
		if (sign < 0)
			r = -r;
		s[i++] = (r > 9 ? (r-10 + 'A') : (r + '0'));
	} while (n /= b);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';

	reverse(s);
}

int main(void) {
	char converted[MAXLINE];
    int number = 0, base = 0;

    printf("Inserire un numero intero");
    scanf("%d", &number);
    printf("Scegliere la base da convertire");
    scanf("%n\n", &base);

    itob(number, converted, base);
    printf("Risultato: %s",converted);

	return 0;
}
