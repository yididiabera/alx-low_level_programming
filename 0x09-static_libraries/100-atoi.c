#include "main.h"
/**
 * _atoi - int
 * @s: pointer
 * Return: int.
 */
int _atoi(char *s)
{
	int i;
	int r = 0;
	int sig = -1;
	int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10;
			r -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
	}
	r = sig * r;
	return (r);
}
