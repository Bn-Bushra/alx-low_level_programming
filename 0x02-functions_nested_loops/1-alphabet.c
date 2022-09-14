#include "main.h"

/**
	* print_alphabet - function that prints the alphabets in lowercase
	*
	* return: Always (0)
*/

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}
