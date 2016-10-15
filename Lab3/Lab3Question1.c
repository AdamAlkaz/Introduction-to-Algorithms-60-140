#include <stdio.h>

int main (void)
{
	//initializing four input variables
	int first = 0;
	int second = 0;
	int third = 0;
	int fourth = 0;

	//initializing place holder for largest and smallest variable
	int largest = 0;
	int smallest = 0;

	//Tell the user what the program does and what to enter
	printf ("Enter four integers and the program will output the larges and smallest numbers\n");

	//recieve input from the user
	scanf ("%d %d %d %d", &first, &second, &third, &fourth);

	//compound if block to see which integer is the largest
	if (first >= second && first >= third && first >= fourth)
		largest = first;
	else if (second >= first && second >= third && second >= fourth)
		largest = second;
	else if (third >= first && third >= second && third >= fourth)
		largest = third;
	else if (fourth >= first && fourth >= second && fourth >= third)
		largest = fourth;

	//compound if block to see which integer is the smallest
	if (first <= second && first <= third && first <= fourth)
		smallest = first;
	else if (second <= first && second <= third && first <= fourth)
		smallest = second;
	else if (third <= first && third <= second && third <= fourth)
		smallest = third;
	else if (fourth <= first && fourth <= second && fourth <= third)
		smallest = fourth;

	//Tell the user the result of the compilation
	printf ("The smallest value is: %d", smallest);
	printf ("\nThe largest value is: %d", largest);
}
