#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha;
for(alpha ='a'; alpha <='z'; alpha++)
{
_printchar(alpha);
}
_printchar('\n');
}
