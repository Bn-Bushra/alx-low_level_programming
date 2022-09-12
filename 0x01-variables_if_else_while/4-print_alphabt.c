#include <stdio.h>
#include <stdlib.h>



/**

  * main - Entry point of the program

  * takes no arguments.

  *

  * Descriptoin: prints lowercase letters except q and e

  * Return: program always return (0)

  */

int main(void)

{

	char cl;



	for (cl = 'a'; cl <= 'z'; cl++)

	{

		if (cl == 'q')

			continue;

		else if (cl == 'e')

			continue;

		putchar(cl);

	}

	putchar('\n');

	return (0);

}
