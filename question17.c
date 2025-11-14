#include <stdio.h>

int main() {
	int grade;

	printf("Enter the student's grade: ");
	scanf("%d", &grade);

	if (grade >= 90) {
		printf("A\n");
	} else if (grade >=80 && grade <= 89) {
		printf("B\n");
	} else if (grade >= 70 && grade <= 79) {
		printf("C\n");
	} else if (grade >= 60 && grade <= 69) {
		printf("D\n");
	} else if (grade < 60) {
		printf("F\n");
	}

	return 0;
}
