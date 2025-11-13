#include <stdio.h>

int main() {
	int mark1, mark2, mark3, mark4, mark5;
	printf("Enter the first mark: ");
	scanf("%d", &mark1);

	printf("Enter the second mark: ");
        scanf("%d", &mark2);

	printf("Enter the third mark: ");
        scanf("%d", &mark3);

	printf("Enter the fourth mark: ");
        scanf("%d", &mark4);

	printf("Enter the fifth mark: ");
        scanf("%d", &mark5);

	if ((mark1 >= 40) && (mark2 >= 40) && (mark3 >= 40) && (mark4 >= 40) && (mark5 >= 40)) {
		printf("PASS\n");
	} else {
		printf("FAIL\n");
	}

	return 0;
}
