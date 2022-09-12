#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
	* main- entry point of the prgramme
	* takes no argument (void)
	*
	* Description: Determining if (int) is positive using if..else.
	* Return: Program always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
