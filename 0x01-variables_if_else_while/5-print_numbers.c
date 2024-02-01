#include <stdio.h>

/**
 * main - the main call
 *
 * Return: Always (success)
 *
 */

int main(void)
{
	int b = 0;

	while (b < 10)
	{
		printf("%d", b);
		b = b + 1;
	}
	printf("\n");
	return (0);
}
