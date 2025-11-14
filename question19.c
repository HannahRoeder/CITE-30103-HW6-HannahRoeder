#include <stdio.h>

int main() {
	int n, total = 0;
	printf("Enter the total number of numbers you want to sum: ");
	scanf("%d", &n);

	int i = 1;
	while (i <= n) {
		total += i;
		i++;
	}

	printf("Total: %d\n", total);
	return 0;
}
