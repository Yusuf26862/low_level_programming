#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - print the absolute value of number
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _abs(int c);
int _abs(int c)
{
	c = abs(c);
	if (c > 0)
	{
		return (c);
	}
	else
	{
		return (-c);
	}
}
