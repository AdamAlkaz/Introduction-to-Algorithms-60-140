#include <stdio.h>

int main(void)
{
	//Bar code numbers from 1 to 11
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;
	int d4 = 0;
	int d5 = 0;
	int d6 = 0;
	int d7 = 0;
	int d8 = 0;
	int d9 = 0;
	int d10 = 0;
	int d11 = 0;

	//initalize first sum, second sum and total
	int firstSum = 0;
	int secondSum = 0;
	int total = 0;

	//Tell the user what needs to be inputted
	printf ("Enter all eleven digits of the bar code \n");

	//Receive input from the user
	scanf ("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

	//compute sums
	firstSum = d1 + d3 + d5 + d7 + d9 + d11;
	secondSum = d2 + d4 + d6 + d8 + d10;

	//compute total
	total = 3 * firstSum + secondSum;

	//Calculate how to check digit in the print statment and display to the user
	printf ("Check digit: %d", 9 - ((total - 1) % 10));
}
