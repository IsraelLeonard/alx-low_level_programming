#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: Always 0
 */

void times_table(void)
{
	int first_num, second_num, product;

	for (first_num = 0; first_num <= 9; first_num++)
	{
		_putchar('0');
			for (second_num = 1; second_num <= 9; second_num++)
			{
				_putchar(',');
				_putchar(' ');
				product = (first_num * second_num);

				if (product < 10)
					_putchar(' ');
				else
					_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		_putchar('\n');
	}
}
