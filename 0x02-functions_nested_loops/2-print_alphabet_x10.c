#include "main.h"

/**
*print_alphabet - print alphabet in lower case ten times
*Return: Always 0(success)
*/

void print_alphabet_x10(void)
{
int a = 0;
while (a < 10)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar (alpha);
alpha++;
}
_putchar ('\n');
a++;
}
}
