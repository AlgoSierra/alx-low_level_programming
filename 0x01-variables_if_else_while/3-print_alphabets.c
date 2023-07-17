#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	for (j = 0; j < 26; j++)
	{
		putchar('A' + j);
	}
	putchar('\n');
	return (0);
}
