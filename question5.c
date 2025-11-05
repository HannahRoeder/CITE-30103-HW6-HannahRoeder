/* User forgot to include an ampersand before n during the scanf statement
 * This would result in a runtime error*/
#include <stdio.h>
int main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("you entered %d\n", n);
	return 0;
}
