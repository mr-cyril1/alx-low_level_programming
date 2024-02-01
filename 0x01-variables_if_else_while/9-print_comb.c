#include <stdio.h>

/**
 * main - the first function call to start runing a program
 *
 *Return: Alwasys return (success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
