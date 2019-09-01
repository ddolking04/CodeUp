#include <stdio.h>

int main() {
	char i;
	while (1) {
		scanf("%c", &i);
		getchar();
		if (i == 'q') {
			printf("%c\n", i);
			return;
		} else {
			printf("%c\n",i);
		}
	}
	return 0;
}