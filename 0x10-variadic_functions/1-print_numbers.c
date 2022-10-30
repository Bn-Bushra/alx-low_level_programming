#include "variadic_functions.h"

/**
  * print_numbers - this function returns the sum of all its parameters
  * @separator: the separator for numbers to sum
  * @n: the guard
  *
  * Return: the print of the input
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argz;

	if (!n)
		return;
	va_start(argz, n);
	if (separator == NULL)
		separator = "";
	printf("%d", va_arg(argz, int));
	for (i = 1; i < n ; i++)
	{
		printf("%s%d", separator, va_arg(argz, int));
	}
	va_end(argz);
	printf("\n");
}
