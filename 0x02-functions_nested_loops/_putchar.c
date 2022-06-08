#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 * Description: A code checker
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
