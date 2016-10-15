#include <stdio.h>
#include <string.h> //need string from standard c library for date

int main (void)
{
	int itemNum = 0; //initialize the item number which is an integer
	float price = 0.0; //initialize price which is a real number
	char date [11] = {'\0'}; //initalize date with the null character
	//date is 11 characters long for {'m''m''/''d''d''/''y''y''y''y''\0'}
	printf ("Enter item number: "); //Tell the user to enter the item number
	scanf ("%d", &itemNum); //recieve the number from the user
	printf ("Enter unit price: "); //tell the user to enter the price of the item
	scanf ("%f", &price); //get the price from the user
	printf ("Enter purchase date (mm/dd/yyyy): "); //tell the user to enter the date and how to enter it
	scanf ("%s", &date); //get the date string from the user
	printf("\n\n"); //display the information two lines lower
	printf("Item\t\t Unit\t\t Purchase\n\t\t Price\t\t Date"); //use tabs to align the words
	printf("\n\n%d\t\t $ %0.2f\t %s", itemNum, price, date); /*display the inputted information only displaying
																two decimal places of the price and the entire date string
																up to the null terminator*/
}
