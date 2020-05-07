#include <stdio.h>

int main_for(void) {

	double input = 0;
	double total = 0;
	int num = 0;

	for ( ; input >= 0; )
	{
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}

	printf("%d\n", num);
	printf("평균: %f \n", total / (num - 1));


	return 0;
}