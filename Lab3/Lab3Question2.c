# include <stdio.h>

int main (void)
{
	//initialize first and second digit
	int firstnum = 0;
	int secondnum = 0;

	//Tell the user what the program does and to input a two digit integer
	printf ("Enter a two digit number, the word of the number will be outputted ");

	//recieve input from the user, seperating the digits
	scanf ("%1d%1d", &firstnum, &secondnum);

	//if block for if the number is between 0 and 9
	if (firstnum == 0)
	{
		if (secondnum == 0)
			printf ("Zero");
		else if (secondnum == 1)
			printf ("One");
		else if (secondnum == 2)
			printf ("Two");
		else if (secondnum == 3)
			printf ("Three");
		else if (secondnum == 4)
			printf ("Four");
		else if (secondnum == 5)
			printf ("Five");
		else if (secondnum == 6)
			printf ("Six");
		else if (secondnum == 7)
			printf ("Seven");
		else if (secondnum == 8)
			printf ("Eight");
		else if (secondnum == 9)
			printf ("Nine");
	}

	//if block for if the number is between 10 and 19
	else if (firstnum == 1)
	{

		//if the number is between 10 and 12
		if (secondnum < 3)
		{
			if (secondnum == 0)
				printf ("Ten");
			else if (secondnum == 1)
				printf ("Eleven");
			else if (secondnum == 2)
				printf("Twelve");
		}

		//if the number is between 13 and 19
		else if (secondnum >= 3)
		{
			if (secondnum == 3)
				printf ("Thir");
			else if (secondnum == 4)
				printf ("Four");
			else if (secondnum == 5)
				printf ("Fif");
			else if (secondnum == 6)
				printf ("Six");
			else if (secondnum == 7)
				printf ("Seven");
			else if (secondnum == 8)
				printf ("Eight");
			else if (secondnum == 9)
				printf ("Nine");

			//numbers in this range always end with the word "teen"
			printf ("teen");
		}
	}

	//if block for all numbers greater then 20 to 99
	else if (firstnum >= 2)
	{

		//print the word of the digit in the tens
		if (firstnum == 2)
			printf ("Twenty-");
		else if (firstnum == 3)
			printf ("Thirty-");
		else if (firstnum == 4)
			printf ("Fourty-");
		else if (firstnum == 5)
			printf ("Fifty-");
		else if (firstnum == 6)
			printf ("Sixty-");
		else if (firstnum == 7)
			printf ("Seventy-");
		else if (firstnum == 8)
			printf ("Eighty-");
		else if (firstnum == 9)
			printf ("Nintey-");

		//print the word of the digits in the ones
		if (secondnum == 1)
			printf ("One");
		else if (secondnum == 2)
			printf ("Two");
		else if (secondnum == 3)
			printf ("Three");
		else if (secondnum == 4)
			printf ("Four");
		else if (secondnum == 5)
			printf ("Five");
		else if (secondnum == 6)
			printf ("Six");
		else if (secondnum == 7)
			printf ("Seven");
		else if (secondnum == 8)
			printf ("Eight");
		else if (secondnum == 9)
			printf ("Nine");
	}
}
