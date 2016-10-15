#include <stdio.h>

int main (void)
{
	int num1 = 0; //initialize the first digit of the number
	int num2 = 0; //initialize the second
	int num3 = 0; //initialize the third
	//tell the user what the program does
	printf ("Enter a three digit number and the output of this program will reverse the numbers: ");
	//recieve the input of the three digit number
	scanf ("%1d %1d %1d",&num1, &num2, &num3);
	//print the reverse of the number
	printf ("The number reversed is: %d%d%d", num3, num2, num1);
}
