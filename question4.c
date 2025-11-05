/*the operand in division needs to be floating point type, so i had to cast one of th eints to float
 * this is a semantic error*/
#include <stdio.h>
int main(void) {
	int a = 5, b = 10;
	float avg = (float)(a + b) / 2;
	printf("Average = %.2f\n", avg);
	return 0;
}
