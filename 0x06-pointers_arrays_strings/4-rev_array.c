#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of elements in the array
 *
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		/* Swap elements a[i] and a[j] */
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
