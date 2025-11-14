#include <stdio.h>

int main() {
	float num1, num2;
	char operator;

	printf("Enter your first number: ");
	scanf("%f", &num1);

	printf("Enter your operation (+, -, *, /): ");
	scanf(" %c", &operator);

	printf("Enter your second number: ");
	scanf("%f", &num2);

	switch(operator){
		case '+':
			printf("%.2f + %.2f = %.2f\n", num1, num2, (num1 + num2));
			break;
		case '-':
			printf("%.2f - %.2f = %.2f\n", num1, num2, (num1 - num2));
			break;
		case '*': 
			printf("%.2f * %.2f = %.2f\n", num1, num2, (num1 * num2));
			break;
		case '/':
			if (num2 == 0) {
				printf("Error: Cannot divide by 0");
			}
			printf("%.2f / %.2f = %.2f\n", num1, num2, (num1/num2));
			break;
		default:
			printf("Invalid operator entered.");
	}
	return 0;
}
