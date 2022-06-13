#include "main.h"
#include <unistd.h>

/**
 * _putchar - check the code
 * Description: A code checker
 * @c: The input character
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
