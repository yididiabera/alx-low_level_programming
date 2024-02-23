#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to be checked
 * Return: always o(success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	return (0);
}
