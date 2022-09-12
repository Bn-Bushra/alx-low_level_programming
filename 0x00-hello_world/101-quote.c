#include <unistd.h>


/**
* main - entry point for the programme
* takes no argument
*
* Description: prints "and that piece of art is useful" - Dora .." with write()
* Return: return value is (1)
*/


int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
