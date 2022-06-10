#include "main.h"

/**
 * print_line - draws a straight line using '_'
 * @n: The number of times '_' is to be printed
 * Return: returns void
 */
void print_line(int n)
{
	int length;

	if (length > 0)
	{
	for (length = 0; length > n; length++)
		_putchar('_');
	}
		_putchar('\n');
}
