//this is a code to banter the the 7-0 man u loss at anfield
//i will be designing the program to ask the user of the goal number and output the scorer of each of the 7 goals😂😂
#include <stdio.h>

int main() {

	int goalNumber;

	printf("Enter the goal number: ");

	scanf("%d", &goalNumber);

	switch(goalNumber) {

		case 1:
		printf("Gakpo 43'\n");
		break;

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
	

		
