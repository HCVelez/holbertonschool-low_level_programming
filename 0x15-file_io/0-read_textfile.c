#include "holberton.h"

/**
 * read_textfile - function to read file and print to POSIX standard output.
 * @filename: file to read
 * @letters: text in file
 * Return: number of chars to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ocheck, wrcheck, bytes;
	char *buff;

	if (!filename || letters == 0)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);

	ocheck = open(filename, O_CREAT);
	if (ocheck == -1)
	{
		free(buff);
		return (0);
	}

	bytes = read(ocheck, buff, letters);
	if (bytes < 1)
	{
		free(buff);
		close(ocheck);
		return (0);
	}

	wrcheck = write(STDOUT_FILENO, buff, bytes);

	free(buff);
	close(ocheck);

	if (!wrcheck || wrcheck != bytes)
		return (0);

	return (bytes);
}
