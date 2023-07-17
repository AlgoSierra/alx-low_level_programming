#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
	/**
	 * Variable i is declared as a character to store
	 * each letter of the alphabet.
	 * 'for' loop is used to iterate from the letter 'a' to the letter 'z',
	 * inclusively.
	 * The loop will go through each letter of the lowercase alphabet.
	 * Inside the loop, an if statement is used to check if the current
	 * letter is not 'q' and not 'e'.
	 * If the condition is true, the following code block will be executed.
	 * The putchar function is used to print the current i.
	 */
}
