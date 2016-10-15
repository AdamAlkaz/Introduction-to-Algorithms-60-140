# include <stdio.h>

int main (void)
{

	//declare the variables
	int number, numOfDigits, digitChecker = 10, count = 1;

	//tell the user what to enter and what the program does
	printf ("Enter a number and the program will reverse the digits: ");

	//get the integer number the user entered
	scanf ("%d",&number);


	//a loop to check how many digits there are in the entered number
	while (1)
	{

		//first check if the number is less than 9 then 99 then 999 and so on
		//if the number entered is less then the digit checker then break the loop
		if (number < (digitChecker - 1))
		{
			//number of digits equals the number of times the while looped
			numOfDigits = count ;
			break;
		}

		//increment the counter and add another digit to the checker
		digitChecker *= 10;
		count++;
	}

	//Tell the user the output
	printf ("The reverse of %d is: ", number);

	//for loop that loops for the number of digits there are
	for (int i = 0; i < numOfDigits; i++)
	{

		//print the right most digit by making the last digit of the number 0
		//and subtracting it from the original number leaving just the last digit
		printf ("%d", number - (number / 10) * 10);

		//remove the right most digit
		number /= 10;
	}
}
