#include "variadic_functions.h"

/**
 * print_numbers - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: If separator is NULL, don’t print it,
 * If one of the string is NULL, print (nil), else
 * Print a new line at the end of your function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
