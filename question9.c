#include <stdio.h>

int main() {
        int num1, num2;
        printf("Enter the first integer: ");
        scanf("%d", &num1);
        printf("Enter the second integer: ");
        scanf("%d", &num2);

        printf("Integer division results: %d\n", (num1/num2));
        printf("Floating-point dvision results: %f\n", ((float) num1/ (float) num2));
}
