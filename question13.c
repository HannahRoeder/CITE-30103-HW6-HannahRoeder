#include <stdio.h>

int main() {
	int num;
	printf("Enter your number: ");
	scanf("%d", &num);
	
	if ((num % 2 == 0) && (num % 3 == 0) && (num % 7 != 0))
	{
		printf("%d is divisible by 2 and 3 but not 7.\n", num);
	} else {
		printf("%d does not meet the criteria.\n", num);
	}

	return 0;
}
