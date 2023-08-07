#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r:  the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: r or 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l, m, n, add = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;

	if (i >= j)
		l = i;
	else
		l = j;

	if (size_r <= l + 1)
		return (0);

	r[l + 1] = '\0';

	i--, j--;  /* Decrement i and j to point to the last digits */
	m = *(n1 + i) - '0';  /* Convert char to int */
	n = *(n2 + j) - '0';  /* Convert char to int */

	while (l >= 0)
	{
		k = m + n + add;

		if (k >= 10)
			add = k / 10;
		else
			add = 0;

		if (k > 0)
			*(r + l) = (k % 10) + '0';  /* Convert int to char */
		else
			*(r + l) = '0';

		if (i > 0)
			i, m = *(n1 + i) - '0';  /* Convert char to int */
		else
			i = 0;

		if (j > 0)
		{
			j--, n = *(n2 + j) - '0';
		}
		else
		{
			n = 0;
		}

		l--, size_r--;
	}

	if (*r == '0')
		return (r + 1);
	else
		return (r);
}
