#include "main.h"

/**
 *  * _isupper - detects uppercase alphabets
 *   * @c: input characters
 *    * Return: 1 if c is true
 *     * else return 0
 *      */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
