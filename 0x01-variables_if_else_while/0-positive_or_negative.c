#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *  more headers goes there 
* main - the main function before starting to run the code
* Return: Returns the code to 0 after execution 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is possitive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
