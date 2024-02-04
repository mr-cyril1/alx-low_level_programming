#include "main.h"

/**
 * _isalpha - checks if the  character is alphabet
 * @c: c initializes any character
 * Return: return 1 if success and 0 if not
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
