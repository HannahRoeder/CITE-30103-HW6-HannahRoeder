#include <stdio.h>

int main() {
	int n, total = 0;
	printf("Enter a number (0 to exit): ");
	scanf("%d", &n);

	if (n != 0) {
		do {
			total++;
			printf("Enter a number (0 to exit): ");
			scanf("%d", &n);
		} while (n != 0);
	}

	printf("Total numbers entered: %d\n", total);
	return 0;
}
