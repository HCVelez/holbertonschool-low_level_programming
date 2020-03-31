#include "holberton.h"

/**
 * create_file - function to create a file
 * @filename: file to create
 * @text_content: text to write to file
 * Return: 1 if successful or -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int nfcheck, len = 0, wrcheck;

	if (!filename || !text_content)
		return (-1);

	nfcheck = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (nfcheck == -1)
		return (-1);
		
	while (text_content[len])
		len++;

	wrcheck = write(nfcheck, text_content, len);
	close(nfcheck);
	if (wrcheck != len)
		return (-1);

	return (1);
}
