#include <stdio.h>

int main (void)
{
	float x = 0, answer = 0; //initializing variables of user input x and the answer
	printf ("This program solves the following polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 \n");
	printf ("input the value of x:  ");
	//Tells the user what the program does and asks for an input of the polynomial

	scanf ("%f" , &x);
	//recieves value of x

	answer = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
	//program calculates answer of the polynomial based on the input of x

	printf ("The answer of the polynomial is: ");
	printf ("%g", answer);
	//Tells the user the result of the compilation
}
