#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
*/
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (space = size - 1 - i; space > 0; space--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
