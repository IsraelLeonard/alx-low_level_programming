#include "main.h"

/**
 * _strcpy - copies a string pointed to by str
 * @dest: pointer to destinaiton
 * @src: pointer to source
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int len, count;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
		dest[count] = src[count];
	return (dest);
}
