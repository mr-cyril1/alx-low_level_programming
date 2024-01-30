#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main is the first function
*
* Return: Always(success)
*/
int main(void)
{
	int last_digit;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
		{
			printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
		}
	else if (n < 0)
		{
			printf("");
		}
	return (0);
}
