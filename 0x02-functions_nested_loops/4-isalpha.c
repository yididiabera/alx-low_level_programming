#include "main.h"

/**
*_isalpha - checking lowercase characters
*@c: is the letter to be checked
*Return: Always 0(success)
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
