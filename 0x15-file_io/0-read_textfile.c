#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: files to read
 * @letters: number of bytes to read
 * Return: the number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t byte;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	byte = read(file, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);
	close(file);
	return (byte);
}
