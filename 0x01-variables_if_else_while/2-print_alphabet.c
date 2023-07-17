#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	/**
	 * Variable i is declared to keep track of the current letter being printed
	 * For loop is used to iterate from i = 0 to i < 26(26 alphabets)
	 * Inside the loop, the putchar function is used to print each letter.
	 * The letter is determined by adding the value of i
	 * to the ASCII value of the lowercase letter 'a'.
	 * This ensures that the correct letter is printed in each iteration.
	 */
	putchar('\n');
	/**
	 * After printing all the lowercase letters, the putchar function
	 * is used to print a newline character ('\n').
	 * This ensures that the next output appears on a new line.
	 */
	return (0);
}
