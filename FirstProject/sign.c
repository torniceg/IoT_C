#include <stdio.h>

int main(void) {

	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	num2 = -num2;

	printf("num1: %d, num2: %d", num1, num2);

	int num3 = 10;
	int num4 = num3-- + 2;

	printf("num3: %d, num4: %d", num3, num4);

	return 0;
}