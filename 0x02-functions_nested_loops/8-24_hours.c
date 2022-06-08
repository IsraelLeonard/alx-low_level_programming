#include "main.h"
/**
 * jack_bauer - A function yhat prints every minute of 24 hours
 * Return: returns Jack_bauer
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 00; hour <= 23; hour++)
	{
		for (minute = 00; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
				_putchar('\n');
		}
	}
}
