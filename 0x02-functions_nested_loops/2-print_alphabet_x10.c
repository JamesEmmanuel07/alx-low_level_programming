#include "main.h"
/**
 * print_alphabet_x10 - prints a - z 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	char c;

	for (x = 0; x <= 9; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
