#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - genrate and print passwrd.
* @argc: argu number
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char locker[7], *codex;

	int length = strlen(argv[1]), x, y;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	y = (length ^ 59) & 63;
	locker[0] = codex[y];

	y = 0;
	for (x = 0; x < length; x++)
		y += argv[1][x];
	locker[1] = codex[(y ^ 79) & 63];

	y = 1;
	for (x = 0; x < length; x++)
		y *= argv[1][x];
	locker[2] = codex[(y ^ 85) & 63];

	y = 0;
	for (x = 0; x < length; x++)
	{
		if (argv[1][x] > y)
			y = argv[1][x];
	}
	srand(y ^ 14);
	locker[3] = codex[rand() & 63];

	y = 0;
	for (x = 0; x < length; x++)
		y += (argv[1][x] * argv[1][x]);
	locker[4] = codex[(y ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		y = rand();
	locker[5] = codex[(y ^ 229) & 63];

	locker[6] = '\0';
	printf("%s", locker);
	return (0);
}
