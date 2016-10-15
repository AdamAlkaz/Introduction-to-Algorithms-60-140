#include <stdio.h>

//a function to creat the magic square using an algorithm
void create_magic_square (int n, int magic_square[n][n])
{
	//magic_square [row][column]

	//set everything in the square to 0
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
			magic_square[i][j] = 0 ;
	}

	//current row and current column hold the current position in the magic square
	int currentRow = 0, currentColumn = n/2;

	//next row and column hold where the next position in the square will be
	int nextRow = 0, nextColumn = n/2;

	//columns are initialized to n/2 so that 1 is placed in the top middle of the square
	magic_square [currentRow][currentColumn] = 1;

	//a for loop to place all the numbers after 1
	for (int num = 2; num <= n * n ; num++)
	{
		//move 1 row up
		nextRow--;

		//move one column right
		nextColumn++;

		//if the next row is above the entire square make it the bottom row
		if (nextRow < 0)
			nextRow = n-1;

		//if the next column is to the right of the entire square make it the left most column
		if (nextColumn == n)
			nextColumn = 0;

		//if there is nothing in the next position of the square
		//place the num and set current position to the next position
		if (magic_square[nextRow][nextColumn] == 0)
		{
			magic_square[nextRow][nextColumn] = num;
			currentRow = nextRow;
			currentColumn = nextColumn;
		}

		//if there is something in the next position of the square
		//go one row beneath the current position and adjust the next position to the current
		else if (magic_square[nextRow][nextColumn] != 0)
		{
			currentRow++;
			nextRow= currentRow;
			nextColumn = currentColumn;
			magic_square[currentRow][currentColumn] = num;
		}
	}
}

//a function created to print the square
//print out one row at a time
void print_magic_square (int n,int magic_square[n][n])
{
	for (int i = 0 ; i < n ; i++)
	{
		for (int l = 0 ; l < n ; l++)
		{
			printf("%d\t", magic_square [i][l]);
		}
		printf ("\n");
	}
}

int main (void)
{
	//num is size of square to be passed through
	int num;

	//tell the user to enter an odd number
	printf("enter an odd number: ");

	//scan entered number
	scanf("%d", &num);

	//create num x num array to pass through functions
	int square [num][num];

	//if the entered number is odd create and print the square
	if (num % 2 != 0)
	{
		create_magic_square (num,square);
		print_magic_square (num,square);
	}
}
