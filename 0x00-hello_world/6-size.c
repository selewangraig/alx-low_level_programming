#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{

int a;
char b;
long int c;
long long int d;
float f;
 printf("size of a char: %lu bytes\n", (unsigned long)sizeof(b));
 printf("size of an int: %lu bytes\n", (unsigned long) sizeof(a));
 printf("size of a long int: %lu bytes\n", (unsigned long) sizeof(c));
 printf("size of a long long int: %lu bytes\n", (unsigned long) sizeof(d));
 printf("size of a float: %lu bytes\n", (unsigned long) sizeof(f));
return (0);
}
