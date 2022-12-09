#include <stdio.h>

/**
 * main - Prints out strings
 * printf is a function that prints out strings to
 * stdout
 * Return: All good
 */

int main()
{
	char a;
	int b;
	double c;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b)); 
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));

	return(0)
}
