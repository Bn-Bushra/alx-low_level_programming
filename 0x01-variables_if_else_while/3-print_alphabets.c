#include <stdlib.h>
#include <stdio.h>

/**
	* main - Entry point of the programme
	* No arguments taken
	*
	* Description: Prints a-z and A-z with a for loop
	* Return: Programme always return (0)
*/
int main(void)
{
	/*declarations*/
	char cl;
	char cu;

	/*statements*/
	for (cl = 'a'; cl <= 'z'; cl++)
	{
		putchar(cl);
	}
	for (cu = 'A'; cu <= 'Z'; cu++)
	{
		putchar(cu);
	}
	putchar('\n');
	return (0);
}
