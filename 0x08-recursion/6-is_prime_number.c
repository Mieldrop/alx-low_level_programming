#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - prints prime numbers
 * @n: input integer
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if a number is prime
 * @n: integer to check
 * @i: iteration times
 * Return: 1 if prime , or 0 if otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
