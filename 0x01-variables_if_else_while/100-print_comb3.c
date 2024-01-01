#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
if (a != b && a < b)
{
	putchar('0' + a);
	putchar('0' + b);
if (b + a != 17)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
