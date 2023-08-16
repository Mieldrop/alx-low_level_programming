#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - checks the code for the students
 * @argc: the array
 * @argv: array argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int byte, i;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", p[i]);
			break;
		}
		printf("%02hhx ", p[i]);
	}
	return (0);
}
