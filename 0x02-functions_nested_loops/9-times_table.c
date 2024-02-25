#include "main.h"

/**
 *times_table - print 9 times table
 *Return: void
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;

			if (prod >= 10)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				if (j == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
