#include <stdio.h>

/**
 * main - prints all possible comination of 3 digits
 *
 * Return: Always (success)
 */

int main(void)
{
	int t = '0';
	int r;
	int i;

	while (t <= '9')
	{
		r = '0';
		while (r <= '9')
		{
			i = '0';
			while (i <= '9')
			{
				if (t < r && r < i)
				{
					putchar(t);
					putchar(r);
					putchar(i);
					if (t != '7')
					{
					putchar(',');
					putchar(' ');
					}
				}
				i++;
			}
			r++;
		}
		t++;
	}
	putchar('\n');

	return ('0');
}
