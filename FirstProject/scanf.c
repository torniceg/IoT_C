#include<stdio.h>

int main_scanf(void) {
	
	
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("%d + %d + %d = %d", num1, num2, num3, num1 + num2 + num3);

	return 0;
}