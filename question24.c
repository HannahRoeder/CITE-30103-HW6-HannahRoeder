#include <stdio.h>

int main() {
	int count = 0;

	for (int i = 1; i <= 50; i++) {
		if (i == 40) {
			break;
		}

		if (i %5 == 0) {
			continue;
		}

		printf("%d\n", i);
		count++;
	}

	printf("Numbers printed: %d\n", count);

	return 0;
}
