#include <stdio.h>

int main_dowhile(void) {

	int i = 0;
	int total = 0;

	do {
		if (i % 2 == 0) {
			total += i;
		}
	} while ( i++ < 101);

	printf("%d", total);

	return 0;
}