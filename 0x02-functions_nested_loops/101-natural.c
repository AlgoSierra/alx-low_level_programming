#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i = 1024;
	int j = 0;
	int k;

	for (k = 1; k < i; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			j += k;
		}
	}
	printf("%d\n", j);
	return (0);
}
