#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the resulting 'dest' string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* If 'src' has fewer than 'n' characters, */
	/* pad the remaining 'dest' with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
