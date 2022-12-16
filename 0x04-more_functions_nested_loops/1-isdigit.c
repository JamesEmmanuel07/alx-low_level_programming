#include "main.h"
/**
 * _isdigit - check for ints
 * @c: to be checked
 *
 * Return: 1 || 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
