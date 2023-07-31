#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of byte
 * @s: first string
 * @accept: second string
 * Return: nothing
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + 1);
		}
	}
	return (NULL);
}
