/*Q. Can you create a program to check whether a number is odd or even? To create this program, create a variable named number and assign a value to it. Then using a ternary operator check if the number variable is odd or even.

If number is odd, print "The number is Odd"
If number is even, print "The number is Even"
*/

#include <stdio.h>

int main() {

	int number;

	printf("Enter number: ");

	scanf("%d", &number);

	(number % 2 == 0) ?

		printf("The number is even"):

		printf("The number is Odd");
}
