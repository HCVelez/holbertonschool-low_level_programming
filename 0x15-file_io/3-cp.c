#include "holberton.h"

/**
 * file_copy - function to copy text form one file to another
 * @src_fd: source file descriptor
 * @dst_fd: destination file descriptor
 * @src: source file
 * @dst: destination file
 * Return: void
 */

void file_copy(int src_fd, int dst_fd, char *src, char *dst)
{
	int rdcheck, wrcheck;
	char buff[1024];

	while (rdcheck)
	{
		rdcheck = read(src_fd, buff, 1024);
		if (rdcheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_fd);
			close(src_fd);
			close(dst_fd);
			exit(98);
		}

		wrcheck = (dst_fd, buff, rdcheck);
		if (wrcheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't wirte to %s\n", dst_fd);
			close(src_fd);
			close(dst_fd);
			exit(99);
		}
	}
}

/**
 * main - program to copy one file to another
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 on success or exit code if not
 */

int main(int argc, char *argv[])
{
	return (0);
}
