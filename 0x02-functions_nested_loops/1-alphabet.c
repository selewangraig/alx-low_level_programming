#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet in lowercase
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char al;
for(al = 'a'; al <= 'z'; al++)
{
putchar(al);
}
return (0);
}
