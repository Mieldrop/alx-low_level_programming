#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the integer
 * @av: array of argument
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *b;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	b = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			b[k] = av[i][j];
			k++;
			j++;
		}
		b[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	b[k] = '\0';
	return (b);
}
