#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
int largest;

a = 972;
b = -98;
c = 0;

largest = largest_number(a, b, c);

if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else
{
largest = c;
}
printf("%d is the largest number\n", largest);
return (0);
}
