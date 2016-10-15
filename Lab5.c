/*This program will take a sentence entered by the user and reverse the word
but leave the final punctuation the same.
The program can handle multiple spaces between words but assumes that the user entered
line starts and ends in non space characters including before the punctuation.*/

#include <stdio.h>

int main (void)
{
	//line is an array of 300 characters and it's assumed that the user
	//enters less than 300 characters
	char line [300];

	//a character variable to store the final punctuation
	char finalPunctuation;

	//i represents the index of the character array
	int i = 1;

	//an integer variable to store the index of the end of the word
	int endOfWord;

	//Tell the user what to enter
	printf ("Enter a sentence: ");

	//array at index 0 now stores the first character of the entered line
	line [i-1] = getchar();

	//do while loop the current character isn't the ending punctuation of the sentence
	while (line [i-1] != '!' && line [i-1] != '.' && line [i-1] != '?')
	{
		//continue to store characters into the array
		line [i] = getchar();

		//increment the index to get through the whole line
		i++;
	}

	//store the final punctuation after exiting the loop
	finalPunctuation = line [i-1];

	//store where the end of the word is, a character before the final punctuation
	endOfWord = i-2;

	//Tell the user what the program will do
	printf ("Reversal of sentence: ");

	//a for loop to go from the charater before the final punctuation of the line
	//to the very first character
	for (int j = i - 2; j >= 0 ; j-- )
	{

		//if the current character isn't a space and the one after is
		//then store the index for where the end a word in the sentence is
		if (line[j] != ' ' && line[j+1] == ' ')
			endOfWord = j;

		//if the curret character isn't a space and the character before it is
		//then this is the beginning of a word
		if (line[j] != ' ' && line[j-1] ==' ')
		{

			//now make a new index storing variable and go from the beginning to the end of the word
			//print it out for the user and add a space at the end
			for (int k = j ; k <= endOfWord ; k++)
				printf ("%c", line[k]);
			printf(" ");
		}

		//when finally at the beginning index on the last loop of the for loop
		//print the word from the beginning index to the last stored end of word index
		//Don't add a space at the end
		if (j == 0)
		{
			for (int k = j ; k <= endOfWord ; k++)
				printf ("%c", line[k]);
		}
	}

	//Finally print out the last stored punctuation
	printf ("%c", finalPunctuation);
}
