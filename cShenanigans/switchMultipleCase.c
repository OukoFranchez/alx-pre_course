//switch with multiple case

#include <stdio.h>

int main() {

	int day;

	printf("Enter Day:");

	scanf("%d", &day);

	switch(day) {

		case 2:
		case 3:
		case 4:
		case 5:
		case 6:

		  printf("weekday\n");
		  break;

		case 1:
		case 7:

		  printf("weekend\n");
		  break;

		default:

		  printf("Invalid\n");
	}

	return 0;
}
