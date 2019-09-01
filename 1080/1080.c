#include <stdio.h>

int main() {
	int i=0;
	int input;
	scanf("%d", &input);
	for (int num = 1; num <= 1000; num++) {
		if (input <= i) {
			printf("%d", num-1);
			return;
		}
		else {
			i += num;
		}
	}
	return 0;
}