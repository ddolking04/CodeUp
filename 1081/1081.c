#include <stdio.h>

int main() {
	int n, m, n1, m1;

	scanf("%d %d", &n, &m);

	for (int n1 = 1; n1 <= n; n1++) {
		for (int m1 = 1; m1 <= m; m1++) {
			printf("%d %d\n", n1, m1);
		}
	}
	return 0;
}
