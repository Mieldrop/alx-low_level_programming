#include "main.h"

/**
 * _isdigit - detects if parameter is a digits
 * @c: parameter
 * Return: 1 if c is a digit
 * return 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
