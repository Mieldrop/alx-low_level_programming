#include "main.h"

int _strlen_recursion(char *s);
int comparator(char *s, int n1, int n2);

/**
 * is_palindrome - reads a sequence backword as foward
 * @s: the string
 * Return: 1 if string is palindrome
 * return 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string to return
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares characters of two strings
 * @s: the string
 * @n1: smallest iterator
 * @n2: largest interator
 * Return: Nothing
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
