#include <stdio.h>

int main() {
	int length, width;
	printf("Enter the length: ");
	scanf("%d", &length);
	printf("Enter the width: ");
	scanf("%d", &width);

	printf("Perimeter: %d\n", ((2 * width) + (2 * length)));
}
