//this is a code to banter the the 7-0 man u loss at anfield
//i will be designing the program to ask the user of the goal number and output the scorer of each of the 7 goals😂😂
#include <stdio.h>

int main() {

	int goalNumber; //declaring a variable goalNumber that will store the goal number

	printf("Enter the goal number: ");  //printing a statement that will prompt the user to enter the goal number

	scanf("%d", &goalNumber); //scanf that will grab the goal number entered above

	switch(goalNumber) {  //switch statement with that will take the goal number variable declared above

		case 1:  //first case which will be used the goal number 1 is entered
		printf("Gakpo 43'\n"); //prints the first goal scorer
		break;  //breaks from the loop if found to be true if not it goes to the case until it finds the one that matches with the goal number entered

		case 2:
		printf("Nunez 47'\n");
		break;

		case 3:
		printf("Gakpo 50'\n");
		break;

		case 4:
		printf("Salah 66'\n");
		break;

		case 5:
		printf("Nunez 75'\n");
		break;

		case 6:
		printf("Salah 83'\n");
		break;

		case 7:
		printf("Firmino 88'\n");
		break;

		default:
		printf("Invalid\n");
		}
	return 0;
}
	

		
