#include<stdio.h>

int main() {
	int input;
	int add = 1;
	scanf_s("%d", &input);

	// ==, !=, <, <=, >, >=
	for (int i=1; i <= input; i++) {
		if (i % 2 == 0) {
			//printf("Input: %d\n", i);
			add *= i;
		} 
	}
	printf("%d", add);
}