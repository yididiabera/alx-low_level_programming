#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
long int x = 612852475143;
long int p;

for (p = 2; p < x; p++)
{
if (x % p == 0)
{
	x = x / p;
}
}
printf("%ld\n", p);
return (0);
}
