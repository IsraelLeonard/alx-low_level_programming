#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: The input string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
