#include <stdio.h>
#include <stdlib.h>

main() {

	float grade;
	printf("Enter the numeric grade: ");
	scanf_s("%f", &grade);

	if (grade >= 90.0) {
		printf("Your grade letter is A.\n");
	}
	else
		if (grade >= 80.0) {
			printf("Your grade letter is B.\n");
		}
		else
			if (grade >= 70.0) {
				printf("Your grade letter is C.\n");
			}
			else
				if (grade >= 60.0) {
					printf("Your grade letter is D.\n");
				}
				else 
				printf("Your grade letter is F.");
}