#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First digit
 * @m: Second digit
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	while (n ^ m)
	{
		count++;
		(n ^ m) &= ((n ^ m) - 1);
	}

	return (count);
}
