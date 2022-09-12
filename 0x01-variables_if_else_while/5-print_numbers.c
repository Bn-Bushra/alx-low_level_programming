#include <stdlib.h>
#include <stdio.h>

/**
	* main - entry point of the programme
	*
	* Takes no arguments
	* 
	* Description: Prints from 0 to 9
	*
	* Retrun: programme always returns (0)
*/
int main(void) 
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
