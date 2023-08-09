#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - locates the index marking the line of
 * the first word contained within a string.
 * @str: the string to locate
 * Return:: the index marking the end of the initial word pointer of str
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts the number of words in a string
 * @str: the str to be counted
 * Return: the number of words contained in the string
 */
int count_words(char *str)
{
	int index = 0, word = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			word++;
			index += word_len(str + index);
		}
	}
	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: NULL
 */
char **strtow(char *str)
{
	char **b;
	int index = 0, word, w, let, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = count_words(str);
	if (word == 0)
		return (NULL);

	b = malloc(sizeof(char *) * (word + 1));
	if (b == NULL)
		return (NULL);

	for (w = 0; w < word; w++)
	{
		while (str[index] == ' ')
			index++;

		let = word_len(str + index);

		b[w] = malloc(sizeof(char) * (let + 1));
		if (b[w] == NULL)
		{
			for (; w >= 0; w--)
				free(b[w]);
			free(b);
			return (NULL);
		}
		for (l = 0; l < let; l++)
			b[w][l] = str[index++];
		b[w][l] = '\0';
	}
	b[w] = NULL;
	return (b);
}
