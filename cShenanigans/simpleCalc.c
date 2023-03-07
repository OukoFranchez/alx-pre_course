#include <stdio.h>

int main() {
//creating a character variable with the name operator to let the user choose which operator they want to use at a time

	char operator;

	printf("Choose an operator ['+', '-', '*', '/']: ");
	scanf("%c", &operator);

//creatiing two variables with the name num1 and num2 which are of double data type to let the user key in each of the number that they want to use

	double num1, num2;

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter second number: ");
	scanf("%lf", &num2);

//creating the result variable which will be used to display the result for the user and it is obviously of double data type
	double result;

//using the switch with operator as the expression to facilitate the arithmetic calculations

	switch(operator) {

		case '+':
		  result = num1 + num2;
		  break;

		case '-':
		  result = num1 - num2;
		  break;

		case '*':
		  result = num1 * num2;
		  break;

		case '/':
		  result = num1 / num2;
		  break;

		default:
		  printf("Syntax Error\n");

	}
	 printf("%.2lf\n", result);
	
	return 0;
}
