//test_condition ? expression1 : expression2;

#include <stdio.h>

int main() {

	int age;

	printf("Enter your age: ");

	scanf("%d", &age);

	(age >= 18) ? printf("Eligible to vote\n") : printf("Sorry, not eligible to vote\n");

	return 0;

}
