#include "main.h"

/**
 * print_square - function that prints a square
 * @size: is the size of the square
 *
 * Return:  print only a new line If size is 0 or less
 */
void print_square(int size)
{
	int i, j;

	/* If size is 0 or less, print only a new line */
	if (size <= 0)
	{
		_putchar('\n');
	}

	/* Loop through rows */
	for (i = 0; i < size; i++)
	{
		/* Loop through columns */
		for (j = 0; j < size; j++){
			/* Print the character */
			_putchar('#');
		}
		/* Move to the next row */
		_putchar('\n');
	}
}
