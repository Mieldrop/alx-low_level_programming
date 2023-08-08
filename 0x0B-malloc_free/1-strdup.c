#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: duplicate of the string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *b;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	b = malloc((sizeof(char) * i) + 1);
	if (b == NULL)
		return (NULL);
	while (a < i)
	{
		b[a] = str[a];
		a++;
	}

	b[a] = '\0';
	return (b);
}

