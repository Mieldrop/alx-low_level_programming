#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument
 * @argv: argument array
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int naira, kobo = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	naira = atoi(argv[1]);

	while (naira > 0)
	{
		kobo++;
		if ((naira - 25) >= 0)
		{
			naira -= 25;
			continue;
		}
		if ((naira - 10) >= 0)
		{
			naira -= 10;
			continue;
		}
		if ((naira - 5) >= 0)
		{
			naira -= 5;
			continue;
		}
		if ((naira - 2) >= 0)
		{
			naira -= 2;
			continue;
		}
		naira--;
	}
	printf("%d\n", kobo);
	return (0);
}
