#include <stdio.h>

/**
 * main - the first function call to start runing a program
 *
 *Return: Alwasys return (success)
 */

int main(void)
{
	int i = '0';

	if (i <= '9')
	{
		putchar(i);
		putchar(',');
		putchar(' '); 
		i++;
	}
	else
		{
			putchar('\n');
		}
	}
	return (0);
}
