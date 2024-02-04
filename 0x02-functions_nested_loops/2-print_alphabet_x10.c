#include "main.h"

/**
 * print_alphabet_x10 - prints _putchar
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

char t;
int r;
r = 0;
while (r < 10)
{
for (t = 'a' ; t <= 'z' ; t++)
{
_putchar(t);
}
_putchar('\n');
r++;
}

}
