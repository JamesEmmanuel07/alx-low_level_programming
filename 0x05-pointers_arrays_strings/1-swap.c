#include "main.h"

/**
 * swap_int - swaps two integers value
 * @a: int 1
 * @b: int 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
