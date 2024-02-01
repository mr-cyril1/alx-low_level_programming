#include <stdio.h>

/**
 * main - the first call to be read
 *
 * Return: Always (success)
 */

int main(void)
{

	char i = '0';
	char t = 'a';
	
	while (i <= '9')
	{
		putchar(i);
		i++;
		
	}
	while (t <= 'f')
	{
		putchar(t);
		t++;
	}

	putchar('\n');
	return (0);
}
