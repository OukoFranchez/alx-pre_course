/*Q. Use the switch statement to create a program that will find the month based on the number input. Here, take the input number from 1 to 12. And, print the corresponding month based on the input value.

If number is 1, print January
If number is 2, print February
If number is 3, print March, and so on.
*/
#include <stdio.h>

int main() {

	int monthNumber;

	printf("Enter the month number: ");
	scanf("%d", &monthNumber);

	switch(monthNumber) {

		case 1:
		printf("January\n");
		break;

		case 2:
		printf("February\n");
		break;

		case 3:
		printf("March\n");
		break;

		case 4:
		printf("April\n");
		break;

		case 5:
		printf("May\n");
		break;

		case 6:
		printf("June\n");
		break;

		case 7:
		printf("July\n");
		break;

		case 8:
		printf("August\n");
		break;

		case 9:
		printf("September\n");
		break;

		case 10:
		printf("October\n");
		break;

		case 11:
		printf("November\n");
		break;

		case 12:
		printf("December\n");
		break;

		default:
		printf("Enter number between 1 & 12 only\n");
	}

	return 0;
}
