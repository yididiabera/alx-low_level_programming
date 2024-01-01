#include "main.h"

/**
*_islower - checking lowercase characters
*@c: is the letter to be checked
*Return: Always 0(success)
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
