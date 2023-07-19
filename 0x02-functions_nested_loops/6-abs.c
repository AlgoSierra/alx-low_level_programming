#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: integer to be converted
 *
 * Return: Always 0 (Success)
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
		return (i);
}
