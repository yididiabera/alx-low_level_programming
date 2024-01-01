#include "main.h"

/**
*print_sign - print the sign of a number
*@n: is the number to be checked
*Return: Always 0(success)
*/

int  print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
