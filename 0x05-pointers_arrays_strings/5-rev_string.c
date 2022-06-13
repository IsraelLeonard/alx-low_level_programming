#include "main.h"

/**
 * rev_string - To reverse a string
 * @s: the string input
 * Return: void
 */
void rev_string(char *s)
{
	int len, count, end;
	char beg;

	len = 0;

	while (s[len] != '\0')
		len++;
	len--;

	for (count = 0; count <= len / 2; count++)
	{
		beg = s[count];
		end = s[len - count];
		s[count] = end;
		s[len - count] = beg;
	}
}
