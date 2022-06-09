#include "main.h"

/**
 * _isdigit - This finction checks for digits
 * @c: input arguement
 * Return: Return 1 if c is digit, returns 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
