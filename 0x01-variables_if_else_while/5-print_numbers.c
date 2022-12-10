#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - ENntry point prints out  sinhgle digits stating from 0 - 9
 *
 * Return: 0
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
