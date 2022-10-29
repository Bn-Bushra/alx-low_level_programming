#include "main.h"

/**
 * clear_bit - sets the value of a given bit
 *  to zero at a given index.
 *  @n: pointer of an ulint.
 *  @index: index of the bit.
 *
 *  Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l;
	if (index > 63)
		return (-1);

	l = 1 << index;
	
	if (*n & l)
		*n ^= l;

	return (1);
}
