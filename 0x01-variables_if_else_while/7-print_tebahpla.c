#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	/*Variable letter is declared as character*/
	/*to store each letter of the alphabet.*/
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	/*for loop is used to iterate from the letter 'z' to the letter 'a',*/
	/*inclusively, in descending order. The loop will go through each letter*/
	/*of the lowercase alphabet in reverse.*/
	putchar('\n');
	return (0);
}
