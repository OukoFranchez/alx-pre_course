#include <stdio.h>

/*I want to take two inputs, one a double and the 2nd a character and print tthem out*/

int main() {
	
	double number;
	char character;
//printing input statements and scanf commands to take the inputs
	printf("Enter double: ");
	scanf("%lf" , &number);

	printf("\nEnter character: ");
	scanf("%c" , &character);
//what will be printed out lastly
	printf("\nnumber = %lf", number);
	printf("\ncharacter = %c", character);

	return 0;
}
