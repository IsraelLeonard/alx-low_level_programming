#include "main.h"

/**
 * print_numbers - To print numbers 0 to 9
 * Return: returns void
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num + '0');
	_purchar('\n');

}