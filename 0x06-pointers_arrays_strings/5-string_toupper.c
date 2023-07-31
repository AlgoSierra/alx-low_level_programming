#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @n: pointer to the input string
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *n)
{
	char *ptr = n;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/* Convert lowercase to uppercase by subtracting 32 from ASCII value */
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (n);
}
