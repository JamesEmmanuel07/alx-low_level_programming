#include <stdio.h>
#include <stdlib.h>

/********************************************//**
 * main - Entry point
 *
 * prints a set of numbers on the console
 *
 * Return: 0 Always
 *
 */


int main(void)
{
	int h;
	int t;
	int o;

	for (h = 0; h <= 9; h++)
	{
		for (t = h + 1; t <= 9; t++)
		{
			for (o = t + 1; o <= 9; o++)
			{
				putchar(h + '0');
				putchar(t + '0');
				putchar(o + '0');

				if (h < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
