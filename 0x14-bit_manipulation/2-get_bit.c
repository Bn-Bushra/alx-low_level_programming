#include "main.h"

/**
 * get_bit - a function that returns the value
 * of a bit at a given index.
 * @n: The bit to be indexed.
 * @index: The index to find.
 *
 * Return: The Value of a bit at that given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int in;

	if (n == 0 && index < 64)
		return (0);
	for (in = 0; in <= 63; n >>= 1, in++)
	{
		if (index == in)
		{
			return (n & 1);
		}
	}

	return (-1);
}
