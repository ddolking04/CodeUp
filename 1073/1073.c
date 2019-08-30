#include <stdio.h>

int main() {
	int input = 0;
	
	while (1) {
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
