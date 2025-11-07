#include <stdio.h>

int num1 = 5;

int main() {
	int num2 = 5;

	printf("Global, declared outside of any function and accessible from any part of the program. This ariable will exist the entire time the program runs.: %d\nLocal, declared inside a specific block of code, and is only accessible within that block. The variable will also only exist while the block of code it was declared in is being executed: %d\n", num1, num2);	
}
