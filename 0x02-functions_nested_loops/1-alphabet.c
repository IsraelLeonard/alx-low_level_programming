#include "main.h"

/**
 * main - A function that prints the alphabet
 * Description: prints alphabets in small letters
 * Return: (0)
 */

int main(void)
{
	char alpha;

	for (alpha = a; alpha <= z; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
