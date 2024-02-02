#include <stdio.h>

/**
 * main - print all possible combination of two two-digit numbers.
 *
 * Return: Always (success)
 */

int main(void)
{
	int  t, r;
	int a, b, c, d;

	for (t = '0' ; t <= 99 ; t++)
	{
		a = t / 10;
		b = t % 10;
		for (r = '0' ; r <= 99 ; r++)
		{
			c = r / 10;
			d = r % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (a != '9' && b != '8')
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
