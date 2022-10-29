#include "main.h"

/**
 * set_bit - set the value of given bit(pointer)
 * to 1 at a given index
 * @n: The pointer that hold the
 * bit value
 * @index: the index of the bit
 *
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v;

	if (index > 63)
		return (-1);
	
	v = 1 << index;
	*n = (*n | v);

	return (1);
}
