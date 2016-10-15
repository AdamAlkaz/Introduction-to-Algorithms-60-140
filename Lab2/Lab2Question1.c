
#include <stdio.h>

int main (void)
{
	//Declaring variables
	int r1c1 = 0; //row 1 column 1
	int r1c2 = 0; //row 1 column 2
	int r1c3 = 0; //row 1 column 3
	int r1c4 = 0; //row 1 column 4
	int r2c1 = 0; //row 2 column 1
	int r2c2 = 0; //row 2 column 2
	int r2c3 = 0; //row 2 column 3
	int r2c4 = 0; //row 2 column 4
	int r3c1 = 0; //row 3 column 1
	int r3c2 = 0; //row 3 column 2
	int r3c3 = 0; //row 3 column 3
	int r3c4 = 0; //row 3 column 4
	int r4c1 = 0; //row 4 column 1
	int r4c2 = 0; //row 4 column 2
	int r4c3 = 0; //row 4 column 3
	int r4c4 = 0; //row 4 column 4
	int cSum1 = 0; //sum of column 1
	int cSum2 = 0; //sum of column 2
	int cSum3 = 0; //sum of column 3
	int cSum4 = 0; //sum of column 4
	int rSum1 = 0; //sum of row 1
	int rSum2 = 0; //sum of row 2
	int rSum3 = 0; //sum of row 3
	int rSum4 = 0; //sum of row 4
	int diagSum1 = 0; //the diagonal sum from the top left to bottom right of the matrix
	int diagSum2 = 0; //the diagonal sum from the top right to bottom left of the matrix

	//Tell the user what the program does
	printf ("Enter 16 numbers of any order from 1 to 16 where no two numbers are the same \n");
	printf ("The program will display the numbers in four rows and four columns and display \n");
	printf ("the sum of every column rows and both diagonals \n \n");

	//get every input of the matrix
	scanf ("%d%d%d%d", &r1c1, &r1c2, &r1c3, &r1c4);
	scanf ("%d%d%d%d", &r2c1, &r2c2, &r2c3, &r2c4);
	scanf ("%d%d%d%d", &r3c1, &r3c2, &r3c3, &r3c4);
	scanf ("%d%d%d%d", &r4c1, &r4c2, &r4c3, &r4c4);

	//calculate the sums of all the columns, rows, and diagonals
	cSum1 = r1c1 + r2c1 + r3c1 + r4c1;
	cSum2 = r1c2 + r2c2 + r3c2 + r4c2;
	cSum3 = r1c3 + r2c3 + r3c3 + r4c3;
	cSum4 = r1c4 + r2c4 + r3c4 + r4c4;
	rSum1 = r1c1 + r1c2 + r1c3 + r1c4;
	rSum2 = r2c1 + r2c2 + r2c3 + r2c4;
	rSum3 = r3c1 + r3c2 + r3c3 + r3c4;
	rSum4 = r4c1 + r4c2 + r4c3 + r4c4;
	diagSum1 = r1c1 + r2c2 + r3c3 + r4c4;
	diagSum2 = r1c4 + r2c3 + r3c2 + r4c1;

	//display the matrix the user inputted
	printf ("\n%d", r1c1);
	printf ("\t%d", r1c2);
	printf ("\t%d", r1c3);
	printf ("\t%d", r1c4);
	printf ("\n%d", r2c1);
	printf ("\t%d", r2c2);
	printf ("\t%d", r2c3);
	printf ("\t%d", r2c4);
	printf ("\n%d", r3c1);
	printf ("\t%d", r3c2);
	printf ("\t%d", r3c3);
	printf ("\t%d", r3c4);
	printf ("\n%d", r4c1);
	printf ("\t%d", r4c2);
	printf ("\t%d", r4c3);
	printf ("\t%d", r4c4);

	//Tell the user the result of all the calculated sums
	printf ("\n\nRow Sums:\t%d", rSum1);
	printf ("\t%d", rSum2);
	printf ("\t%d", rSum3);
	printf ("\t%d", rSum4);
	printf ("\nColumn Sums:\t%d", cSum1);
	printf ("\t%d", cSum2);
	printf ("\t%d", cSum3);
	printf ("\t%d", cSum4);
	printf ("\nDiagonal sum:\t%d", diagSum1);
	printf ("\t%d", diagSum2);
}
