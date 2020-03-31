#include "holberton.h"

/**
 * append_text_to_file - function that appends text to a file
 * @filename: file to append to
 * @text_content: text to append
 * Return: 1 if successful or -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int nfcheck, len = 0;

	if (!filename)
		return (-1);

	nfcheck = open(filename, O_RDWR | O_APPEND);
	if (nfcheck == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		write(nfcheck, text_content, len);
	}
	close(nfcheck);

	return (1);
}
