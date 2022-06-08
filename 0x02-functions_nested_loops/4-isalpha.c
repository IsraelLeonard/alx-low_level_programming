#include "main.h"

/**
 * _isalpha - Aprogrem ghat checks for alphabets
 *
 * @c: Is the variable ised for the check
 *
 * Return: it returns (0) if true and (1) if false
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
