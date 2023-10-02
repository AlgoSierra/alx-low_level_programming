#include "main.h"

/**
 * _strcmp - function that compares two strings (lexicographically)
 * The comparison is done by character until a differing character is found,
 * or until the null terminators of both strings are reached.
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero
 *         if s1 is found, respectively, to be less than, to match,
 *         or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
