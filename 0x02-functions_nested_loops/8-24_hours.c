#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hour;
	int min;
	int hour_rem;
	int min_rem;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			min_rem = min % 10;
			hour_rem = hour % 10;
			_putchar(hour / 10 + '0');
			_putchar(hour_rem + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_rem + '0');
			_putchar('\n');
		}
	}
}
