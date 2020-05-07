#include <stdio.h>

void printNum( int num ) {
	printf("%d\n", num);
}

void printChar( char ch, int count ) {
	if (count < 1) return;

	while (count > 0) {
		printf("%c", ch);
		count--;
	}
}

void printLine() {
	printf("*\n");
}

int main_while(void) {

	int i = 0;
	while (i < 5) {
		printChar('o', i++);
		printLine();
	}

	return 0;
}