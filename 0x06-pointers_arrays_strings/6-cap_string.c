#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @cap: string to be capitalized
 * Return: pointer of the changed string
 */

char *cap_string(char *cap)
{
	int input = 0;

	while (cap[input])
	{
		while (!(cap[input] >= 'a' && cap[input] <= 'z'))
			input++;

		if (cap[input - 1] == ' ' ||
		cap[input - 1] == '\t' ||
		cap[input - 1] == '\n' ||
		cap[input - 1] == ',' ||
		cap[input - 1] == ';' ||
		cap[input - 1] == '.' ||
		cap[input - 1] == '.' ||
		cap[input - 1] == '!' ||
		cap[input - 1] == '?' ||
		cap[input - 1] == '"' ||
		cap[input - 1] == '(' ||
		cap[input - 1] == ')' ||
		cap[input - 1] == '{' ||
		cap[input - 1] == '}' ||
		input == 0)
			cap[input] -= 32;
		input++;
	}
	return (cap);
}
