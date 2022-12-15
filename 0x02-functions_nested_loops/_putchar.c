#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point
 * &c - char to print
 *
 * Return: 0 success
 *
 * On error, -1 is returned
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
