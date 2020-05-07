#include <stdio.h>

int main_bit(void) {

	int num;
	scanf_s("%d", &num);

	int minusNum = ~num+1;
	printf("input: %d\n", minusNum);

	int num1 = 3;
	printf("output: %d", num1 << 3 >> 2);

	return 0;
}