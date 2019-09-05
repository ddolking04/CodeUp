#include <stdio.h>
int main() {
	int i, j, sum = 0;
	scanf("%d", &i);

	for (int j = 1; ; j++) {
		sum += j;
		if (sum >= i) {
			break;
		}
	}
	printf("%d", sum);

	return 0;
}