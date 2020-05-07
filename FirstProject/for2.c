#include <stdio.h>

int mux(int num) {
	if (num == 1) {
		return num;
	}
	else {
		return num *= mux(num-1);
	}
}

int main(void) {

	int num = 5;

	int value = mux(num);

	printf("%d", value);
	//scanf_s("%d", &num);

	return 0;
}