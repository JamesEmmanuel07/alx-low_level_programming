#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char num;
	char ch;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
