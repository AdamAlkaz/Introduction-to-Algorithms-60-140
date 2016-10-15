#include <stdio.h>

int main (void)
{
	//make variables for current character and previous character of sentence
	char ch, lastCh = '\0';

	//make variables for the number of words and word length
	float wordLen = 0.0, numOfWords = 1.0;

	//Tell the user what the program does and to enter a sentence
	printf ("Enter a sentence and the program will give the average word length:\n");

	//get the first character of the word
	ch = getchar();

	//loop until the current character isn't the next line character
	while (ch != '\n')
	{

		/*if the current character isn't a space or a tab character
		then increase the total word lenth of the sentence*/
		if (ch != ' ' && ch != '\t')
			wordLen++;

		//if the current characer is a space character
		//then increase the word count by one
		if (ch == ' ' || ch == '\t')
			numOfWords++;

		//get the next character
		ch = getchar();
	}

	//tell the user the result of the program calculation
	printf ("Average word length is: %.1f", wordLen/numOfWords);
}
