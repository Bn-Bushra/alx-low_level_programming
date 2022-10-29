#include "main.h"

/**
 * binary_to_uint - a program that converts binary
 * number to an unsigned int.
 * @b: the number to be converted
 *
 * Return: the unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int len, binary;

	if (!b)
		return (0);
	uint =  0;

	/* get length */
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, binary = 1; len >= 0; len --, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			uint += binary;
		}
	}

	return (uint);
}
