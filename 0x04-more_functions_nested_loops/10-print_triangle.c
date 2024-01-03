#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
int i;
int x;
int s;

for (i = 0; i < size; i++)
{
for (s = size - 1 - i; s > 0; s--)
{
	_putchar(' ');
}
for (x = 0; x <= i; x++)
{
	_putchar('#');
}
	_putchar('\n');
}
if (size <= 0)
{
	_putchar('\n');
}
}
