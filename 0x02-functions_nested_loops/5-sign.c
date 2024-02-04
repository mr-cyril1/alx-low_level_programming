#include "main.h"

/**
 * print_sign - it writes a function that prints the sign of a number
 * @n: n is the initialized
 * Return: return 1 if n is greater than 0, 0 if n is zero and -1 if n is less than 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n > 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
