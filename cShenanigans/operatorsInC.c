//in C programming an operator is a symbol or set of symbols used to perform a specific operation in one or more operands (values, variables or experessions
//There are various types of operators such as arithmetic operators like addition and subtraction
//Arithmetic operators
//addition +
//subtraction -
//multiplicaion *
//division /
//remainder %
//Increament ++
//Decreament --

//addition

#include <stdio.h>

int main() {
	
	//int x = 12;

//	int result = x + 8;

//	printf("Result = %d\n", result);

//	we can also use operators in other data types like doubles

//	double x = 9.89;

//	double result = x + 9.12;
	
//	printf("result = %.2lf\n", result); //we used lf because the data type  is a double and added a .2 before the lf to print our result in 2 decimal places

//we can also add two different data types such an integer and a double

//	int y = 78;

//	double z = 19.56;

//	printf("Result = %.2lf\n", y + z );

//increment and decreament operator to add or subtract 1 from the value that you have


//	int h = 12;

//	printf("Increament Result = %d\n", ++h);

//	printf("IncreamentEXP result = %d\n", h++);

//multiple operators

	int j = 5 + 2 * 9 / 3 -3;

	printf("AssignmentJ = %d\n", j);
	return 0;
}
