#include "main.h"

/**
  * binary_to_uint - converts a string b to an unsigned int
  * @b: string to be converted
  * Return: converted string
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}

/*
 * alternative method not using bitwise but a power of 2
 *
 *
 * unsigned int binary_to_uint(const char *b)
 *{
 *
 *	int len = 0, pow = 1;
 *	unsigned int sum = 0, error = 0;
 *
 *	if (b == NULL)
 *		return (error);
 *
 *	while (b[len] != '\0') // find string length
 *		len++;
 *	len -= 1;
 *
 *	while (len >= 0) // iterate from back of string
 *	{
 *		if ((b[len] != '0') && (b[len] != '1'))
 *			return (error);
 *
 *		if (b[len] == '1') // add appropriate power of 2 if '1'
 *			sum += pow;
 *
 *		pow *= 2; // update power of 2
 *		len--;
 *	}
 *
 *	return (sum);
 *}
 */
