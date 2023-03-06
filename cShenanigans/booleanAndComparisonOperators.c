//Boolean is a data type that can store only two values; true and false
//However, to create boolean we must #include <stdbool.h> file
//in C, boolean values are represented as int data type and we therefore print with %d and true is represented by 1 and false represented by 0

//Comparison operators
// > greater than
// < less than
// == equal to
// >= greater than or equal to
// <= less than or equal to
// != not equal to


#include <stdio.h>
#include <stdbool.h>

int main() {

	bool value1 = true;

	bool value2 = false;

	printf("True = %d\n", value1);

	printf("False = %d\n", value2);

//greater than operator
//checks if a value is greater than another 

	bool value = (12 > 9);
	
	printf("%d \n", value);	

//compound operator 
//you can use two comparison operators at the same time to check the comparison

	bool value4 = (12 >= 2);

	printf("%d \n", value4);

//not equal to operator (!=)
//checks if a value is not equal to another

	bool value3 = (12 != 8);

	printf("%d \n", value3);

//we can also use comparison operators to compare variables

	int number1 = 9;

	int number2 = 6;

	bool comparison = (number1 > number2);

	printf("%d \n", comparison);

//Logical Operators
//Used with boolean to perform logical operations
//C has 3 logical operators;
//&& - AND
// ||- OR
// !- NOT

// && both must be true

	int age = 18;

	double height = 6.3;

	bool result = (age >= 18) && (height > 6.0);

	printf("%d \n", result);

// || used if either is true

	int age1 = 17;

	double height1 = 6.7;

	bool result1 = (age1 >= 18) || (height1 > 6.0);

	printf("%d \n", result1);
// ! reverses the true values

	int age2 = 18;
	
	bool result2 = !(age2 >= 18);

	printf("%d \n", result2);


	return 0;
}

