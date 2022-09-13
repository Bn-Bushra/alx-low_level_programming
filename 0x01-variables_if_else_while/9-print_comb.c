#include <stdio.h>
#include <stdlib.h>



/**
  * main - entry point of the program
  *
  * Takes no arguments
  *
  * Return: program always returns (0)
  */

int main(void)

{

	int n;



	for (n = 48; n <= 59; n++)

	{

		putchar(n);



		if (n == 57)

		{

			break;

		}

		putchar(',');

		putchar(' ');

	}



	putchar('\n');



	return (0);

}
