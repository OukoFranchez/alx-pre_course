/*int - %d for printing
double - %lf for printing
float - %f for printing
char - %c for printing
*/
//Data type int
//storing whole numbers which can be either negative or positive
#include <stdio.h>
//data type float and double
//double type
//we can also use double and floats to store exponentials
//char data type - for storing characters 
int main() {
        double number = 12.45;
        float number1 = 10.9f; //adding f at the end of it to indicate float
        double number3 = 5.5e6; //using double to store exponentials 10 power 6
        char character = 'z';
        printf("number = %.2lf\n", number);
        printf("number1 = %.2f\n", number1);
        printf("number3 = %lf\n", number3);
        printf("character = %c\n", character);
        printf("characterInt = %d\n", character);

        return 0;
}


