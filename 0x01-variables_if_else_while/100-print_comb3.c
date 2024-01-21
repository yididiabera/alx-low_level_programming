#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
    int x;
    int y;

    for (x = 48; x <= 57; x++)
    {
        for (y = 48; y <= 57; y++)
        {
            if (x != y && x < y)
            {
                putchar(x);
                putchar(y);

                if ((x +y) != 113)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return(0);
}
