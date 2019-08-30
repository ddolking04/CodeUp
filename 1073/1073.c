#include <stdio.h>

int main() {
	int input = 0;

	do {
		scanf("%d", &input);
		if (input != 0) {
			printf("%d\n", input);
		}
	} while (input != 0);

	return 0;
}
