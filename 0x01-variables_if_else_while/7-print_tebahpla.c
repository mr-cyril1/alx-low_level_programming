#include <stdio.h>

/**
 * main - the first funtion to be read
 *
 * Return: Always (success)
 */

int main(void)
{
	int rvs = 'z';

	while (rvs >= 'a')
	{
		putchar(rvs);
		rvs--;
	}
	putchar('\n');
	return (0);
}
