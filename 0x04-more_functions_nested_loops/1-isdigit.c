#include "main.h"

/**
 * main - function that checks for digit (o through 9)
 * @c: digit to be checked
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
