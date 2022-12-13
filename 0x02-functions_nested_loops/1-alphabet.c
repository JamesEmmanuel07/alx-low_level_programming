#include <stdio.h>
/**
 * main - create a  function that prints a - z 
 *
 * Return: 0 (  :)  )
 */
void print_alphabet(void)
{
	int alp;

	for (alp='a'; alp<='z'; alp++)
		putchar(alp);
	putchar("\n");
	return;
}

int main(void)
{
	print_alphabet();
}
