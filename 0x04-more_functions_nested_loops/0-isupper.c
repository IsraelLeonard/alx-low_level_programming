#include <stdio.h>

/**
 * _isupper - To check for the upper case character
 * @c: The input arguement
 * Return: returns 1 for uppercase characters and 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
