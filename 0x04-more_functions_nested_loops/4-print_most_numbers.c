#include "main.h"

/**
 * print_most_numbers : prints numbers from 0 to 9
 * do not print 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
if (a != 2 && a != 4)
_putchar(a);
}
_putchar('\n');
}
