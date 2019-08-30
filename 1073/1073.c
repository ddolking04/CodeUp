#include <stdio.h>

int main() {

	for (int input = 0; 1; ) {
		scanf_s("%d", &input);
		if (input != 0) {
			printf("%d\n", input);
		}
		else {
			return;
		}
	}
	return 0;
}
