#include <stdio.h>

#define PI 3.1415926
int main() {
	const double PI_CONSTANT = 3.1415926;	
	printf("Enter the radius: ");
	float radius, area1, cirfumerence1, area2, circumference2;
	scanf("%f", &radius);
	cirfumerence1 = (2 * PI * radius);
	area1 = (PI * (radius * radius));
	circumference2 = (2 * PI_CONSTANT * radius);
	area2 = (PI_CONSTANT * (radius * radius));
	printf("Area (calculated with #define): %.2f\n", area1);
	printf("Circumference (calculated with #define): %.2f\n", cirfumerence1);
	printf("Area (calculated with constant): %.2f\n", area2);
	printf("Circumference (calcuated with constant): %.2f\n", circumference2);
}

