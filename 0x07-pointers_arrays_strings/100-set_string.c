#include "main.h"
#include <stsio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the address of string s
 * @to: string to set value to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
