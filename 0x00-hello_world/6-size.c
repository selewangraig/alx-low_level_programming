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
printf("size of a char: %lu byte(s)\n", sizeof(b));
printf("size of an int: %lu byte(s)\n", sizeof(a));
printf("size of a long int: %lu byte(s)\n", sizeof(c));
printf("size of a long long int: %lu byte(s)\n", sizeof(d));
printf("size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
