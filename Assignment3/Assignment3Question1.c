# include <stdio.h>

int main (void)
{
	//declare variable of integer to be entered
	int number;

	//tell the user what the program does
	printf ("Enter a number from 0 to 9999 and the program will tell how many digits there are: ");

	//recieve input from the user
	scanf ("%d", &number);

	//check if the number is 1 digit
	if (number >= 0 && number <=9)
		printf ("\nThe number %d has 1 digit", number);

	//check if the number is 2 digits
	else if (number > 9 && number <= 99)
		printf ("\nThe number %d has 2 digit", number);

	//check if the number is 3 digits
	else if (number > 99 && number <= 999)
		printf ("\nThe number %d has 3 digit", number);

	//check if the number is 4 digits
	else if (number > 999 && number <= 9999)
		printf ("\nThe number %d has 4 digit", number);
}
