#include <stdio.h>

int main (void)
{
	//variables represent numerator, denominator, and greatest common denominator (gcd)
	int numerator, denominator, gcd;

	//a flag to see if the fraction got reduced, initialized to zero
	int reduced = 0;

	//Tell the user to enter a fraction
	printf ("Enter a Fraction: ");

	//get the entered numerator and denominator
	scanf ("%d/%d", &numerator, &denominator);

	//set the gcd to the greater number
	if (numerator > denominator)
		gcd = numerator;
	else if (denominator > numerator)
		gcd = denominator;

	//if the fraction is equal the output is 1 and the reduced flag becomes true
	else if (denominator == numerator)
	{
		printf ("In lowest terms: 1");
		reduced = 1;
	}

	//do while loop the fraction isn't reduced and the gcd isn't zero
	while (reduced == 0 && gcd > 0)
	{

		//if both the numerator and the denominator are evenly divided by the gcd
		if (denominator % gcd == 0 && numerator % gcd == 0)
		{
			//tell the user the reduced fraction
			printf("In lowest terms: %d/%d", numerator / gcd , denominator / gcd);

			//reduced flag becomes true to break the loop
			reduced = 1;
		}

		//decrement the gcd to cycle through all possible gcd
		gcd--;
	}

	//if gcd became zero and the fraction still wasn't reduced
	//then the lowest term of the fraction is how it was entered
	if (reduced == 0)
		printf ("In lowest terms: %d/%d", numerator, denominator);
}
