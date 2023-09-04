#include "main.h"

/**
 * _strlen - returns the length of a string
 * @n: the string
 * Return: integer length of string
 */
int _strlen(char *n)
{
	int i = 0;

	if (!n)
		return (0);

	while (*n++)
		i++;
	return (i);
}

/**
 * create_file - creates files
 * @filename: name the file created
 * @text_content: the text contained in the file created
 * Return: 1 on success, 0 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byte = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (len)
		byte = write(file, text_content, len);
	close(file);
	return (byte == len ? 1 : -1);
}
