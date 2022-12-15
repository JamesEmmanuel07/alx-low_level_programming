#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number of the sign
 * Return: 1 if number is more than 0
 * 0 if number is zero
 * -1 if number is lessthan zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0;)
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
