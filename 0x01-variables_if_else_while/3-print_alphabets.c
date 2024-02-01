#include <stdio.h>
/**
 * main - prints the main function
 *
 * Return: Always (success)
 */

int main(void)
{
	char lc, uc;
	
	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A' ; uc <= 'Z' ; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
