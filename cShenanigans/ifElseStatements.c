#include <stdio.h>

#include <stdbool.h>

int main() {

	int age;

	printf("Enter your age: \n");

	scanf("%d", &age);

	if (age < 18){

		printf("You are not an eligible voter\n");
	}


//else if statement and else statement

	else if(age >= 120 || age < 0){
		
		printf("Invalid age\n");
	}

	else if(age >= 18 && age < 120){

		printf("You are an eligible voter!\n");
	}


	return 0;

}
