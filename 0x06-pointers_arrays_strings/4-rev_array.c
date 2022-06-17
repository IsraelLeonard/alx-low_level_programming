#include "main.h"

/**
 * reverse_array - reverse the element in array
 * @a: array
 * @n: size of the element of the array in bytes
 * Return: return void
 */
void reverse_array(int *a, int n)
{
	int b;
	int temp;

	for (b = 0; b < n--; b++)
	{
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
	}
}
