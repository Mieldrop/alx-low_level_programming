#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of argument
 * @...: the integre to be sum
 * Return: 0 if n == 0,
 * otherwise return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list add;

	if (!n)
		return (0);
	va_start(add, n);
	while (i--)
		s += va_arg(add, int);
	va_end(add);
	return (s);
}
