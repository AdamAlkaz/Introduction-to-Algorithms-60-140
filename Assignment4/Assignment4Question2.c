/*This program will take a frist and last name the user entered and output it
in the format: Last name, First name initial.*/

#include <stdio.h>

int main (void)
{
	//two character variables to store the first name initial and to
	//store the current variable being checked
	char firstNameInitial, currentChar;

	//tell the user what to input
	printf ("Enter a first and last name: ");

	//get first character of entered line
	currentChar = getchar();

	//cycle through any spaces entered in the beginning
	while (currentChar == ' ')
		currentChar = getchar();

	//store first name initial
	firstNameInitial = currentChar;

	//cycle through the first name
	while (currentChar != ' ')
		currentChar = getchar();

	//cycle through spaces between the first and last name
	while (currentChar == ' ')
		currentChar = getchar();

	//print out the last name
	while (currentChar != ' ' && currentChar != '\n')
	{
		printf ("%c", currentChar);
		currentChar = getchar();
	}

	//print the first initial after the last name
	printf (", %c.", firstNameInitial);
}
