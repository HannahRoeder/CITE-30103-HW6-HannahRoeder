#include <stdio.h>

int main() {
	char a = 'a';
	int num = 1;
	long int num2 = 2;
	float num3 = 3;
	double num4 = 4;
	printf("Size of char 'a': %zu\n", sizeof(a));
       	printf("Size of int 1: %zu\n",sizeof(num));
	printf("Size of long int 2: %zu\n", sizeof(num2));
	printf("Size of float 3: %zu\n", sizeof(num3));
	printf("Size of double 4: %zu\n", sizeof(num4));

	return 0;	
}
