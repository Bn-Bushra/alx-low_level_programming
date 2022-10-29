# 0x08 - Recursion in C.

## Tasks
1. 0-puts_recursion.c ; i prints a string and new line using puts. 
2.
3.
4.
5.
6.

## Advanced Tasks
1.
2.

## External Links

# Getting to know recursion

## What is RECURSIOn?
## Framework for a recursive function
void recursion(void)
{
	//base case

	//recursive case
}

Example
int fact(int n)
{
	if ((n == 0) || (n == 1)) /* base case */
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}
The collatz conjecture
int collatz(int n)
{
	if(n = 1)
	{
		return 1;
	}
	else if(n % 2 == 0)
	{
		return (n / 2);
	}
	else(n % 2 == 1)
	{
		return (3n + 1);
	}
}
