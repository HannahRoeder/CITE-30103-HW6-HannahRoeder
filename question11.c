#include <stdio.h>

int main() {
	int num1, num2;
	printf("Enter the first integer: ");
	scanf("%d", &num1);
	printf("Enter the second integer: ");
	scanf("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, (num1 + num2));
	printf("%d - %d = %d\n", num1, num2, (num1  - num2));
	printf("%d * %d = %d\n", num1, num2, (num1 * num2));
	printf("%d / %d = %.2f\n", num1, num2, ((float) num1 / (float) num2));
	printf("remainder of %d / %d = %d\n", num1, num2, (num1 % num2));

	return 0;
}
