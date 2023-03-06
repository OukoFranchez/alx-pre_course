/*Q. Can you create a program to check whether a number is positive or negative or 0?

If number is positive, print "The number is positive"
If number is negative, print "The number is negative"
(and) If number is 0, print "The number is 0"
*/
#include <stdio.h>

int main() {

	double number;

	printf("Enter number: ");
	
	scanf("%lf", &number);

	if (number > 0 ){

		printf("The number is positive\n");
	}

	else if(number < 0 ){

		printf("The number is negative\n");
	}

	else {

		printf("The number is zero\n");
	}

	return 0;
}

