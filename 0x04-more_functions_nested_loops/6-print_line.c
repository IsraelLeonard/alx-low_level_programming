#include "main.h"

/**
 * print_line - draws a straight line using '_'
 * @n: The number of times '_' is to be printed
 * Return: returns void
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}