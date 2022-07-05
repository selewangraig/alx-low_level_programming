#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet in lowercase
 * followed by new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char al;
for(al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
return (0);
}
