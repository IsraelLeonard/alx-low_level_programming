#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints natural numbers to 98
 * @n: The intege from which a countdown is done
 * Return: it returns n
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("98\n");
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("98\n");
	}
	return (n);
}
