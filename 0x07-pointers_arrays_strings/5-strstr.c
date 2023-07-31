#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of the located string,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
