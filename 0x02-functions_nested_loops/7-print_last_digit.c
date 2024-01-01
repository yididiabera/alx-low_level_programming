#include "main.h"

/**
*print_last_digit - print last digit of a number
*@n: is the number to be checked
*Return: Always 0
*/

int print_last_digit(int n)
{
n = n % 10;
if (n >= 0)
	_putchar(n + '0');
else if (n < 0)
{
n = -n;
_putchar(n + '0');
}
return (n);
}
