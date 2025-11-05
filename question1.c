//documentation
#include <stdio.h>

//main section
int main() {
	int length, width;
	printf("Enter the length: ");
	scanf("%d", &length);
	printf("Enter the width: ");
	scanf("%d", &width);
	//add each of the 2 sides together
	printf("Perimeter: %d\n", ((2 * width) + (2 * length)));
}
