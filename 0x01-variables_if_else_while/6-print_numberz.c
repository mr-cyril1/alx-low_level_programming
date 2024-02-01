#include <stdio.h>

/**
 * main - the main function call
 *
 * Return: Always (success)
 */

int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
