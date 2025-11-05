//documentation
#include <stdio.h>

//main section
int main() {
	int length, width;
	printf("Enter the length: ");
	scanf("%d", &length);
	printf("Enter the width: ");
	scanf("%d", &width);
	//calculate and print the perimeter
	printf("Perimeter: %d\n", ((2 * width) + (2 * length)));
	//calculate and print the area
	printf("Area: %d\n", (width * length));
}
