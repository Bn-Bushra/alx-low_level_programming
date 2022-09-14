#include "main.h"

/**
	* print_alphabet_x10 - function that displays alphabets 10 times
	*
	* Return: Always return (0)
*/

void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 1;
	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
		i++;
	}
}
