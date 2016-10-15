# include <stdio.h>

int main (void)
{
	//declare variables of date 1 and date 2
	int day1, month1, year1, day2, month2, year2;

	//variables are flags for which date is earlier, if there is same year, month, or date
	int earlierDate, sameYear = 0, sameMonth = 0, sameDate = 0;

	//Tell the user what the program does
	printf ("This program will take two dates and tell which date is earlier");

	//prompt user to enter first date and how to type it
	printf ("\nEnter the first date in the format mm/dd/yy: ");

	//get first date from the user
	scanf ("%d/%d/%d", &month1, &day1, &year1);

	//prompt the user to enter the second date and how to type it
	printf ("\nEnter the second date in the format mm/dd/yy: ");

	//get input from the user for the second date
	scanf ("%d/%d/%d", &month2, &day2, &year2);

	//if block checks the earlier year or is the dates have the same year
	if (year1 > year2)
		earlierDate = 2;
	else if (year1 < year2)
		earlierDate = 1;
	else if (year1 == year2)
		sameYear = 1;

	//if the date have the same year, this if block checks which month is earlier or if they have the same month
	if ((month1 > month2 )&& (sameYear == 1))
		earlierDate = 2;
	else if ((month1 < month2) && (sameYear == 1))
		earlierDate = 1;
	else if ((month1 == month2) && (sameYear == 1))
		sameMonth = 1;

	//if the dates have the same month and year
	//this if block checks which date has an earlier day
	//if both days are the same at this point the flag "sameDate" becomes true
	if ((day1 > day2) && (sameMonth == 1))
		earlierDate = 2;
	else if ((day1 < day2) && (sameMonth == 1))
		earlierDate = 1;
	else if ((day1 == day2) && (sameMonth == 1))
		sameDate = 1;

	//Tell the user the result of running the code
	//if the flag "earlierDate" is 1 then date 1 is earlier and if its 2, date 2 is earlier
	if (earlierDate == 1)
		printf ("Date %.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month1, day1, year1, month2, day2, year2);
	else if (earlierDate == 2)
		printf ("Date %.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month2, day2, year2, month1, day1, year1);
	else if (sameDate == 1)
		printf ("Date %.2d/%.2d/%.2d is the same date as %.2d/%.2d/%.2d", month2, day2, year2, month1, day1, year1);
}
