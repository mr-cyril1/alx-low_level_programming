#include <stdio.h>

/**
 * main - the main functiion
 *
 * Return: Always (success)
 */

int main(void)
{
	char rm;
	for (rm = 'a'; rm <= 'z' ; rm++)
	{
		if (rm != 'e' && rm != 'q')
		{
			 putchar(rm);
		}
	}
	putchar('\n');
	return (0);
}
