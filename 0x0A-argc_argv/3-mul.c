#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, v = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		v *= atoi(argv[i]);
	}
	printf("%d\n", v);
	return (0);
}
