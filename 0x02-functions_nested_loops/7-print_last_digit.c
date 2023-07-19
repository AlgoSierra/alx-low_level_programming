#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: the last digit of a number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int i)
{
	int num = i % 10;

	if (num < 0)
		num *= -1;
	_putchar(num + '0');
	return (num);
}
