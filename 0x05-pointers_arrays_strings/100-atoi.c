#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: integer
 * Return: 0 if there are no number in the string
 */

int _atoi(char *s)
{
	int c;
	unsigned int b;
	char *temp;

	temp = s;
	b = 0;
	c = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			c *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			b = b * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (b * c);
}
