#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - entrypoint
 * @argc: arguments passed to program
 * @argv: list of arguments passed to the program
 * Description: Takes two filenames as arguments,then it copy's the
 * contents in the
 * first/second. First file must live, then the second can be made during
 * the copying process.
 * Return: 0 on success if it's an error return 97, 98, 99, 100 depending on the error
*/

int main(int argc, char *argv[])
{
	int filedes_from, filedes_to, bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filedes_from = open(argv[1], O_RDONLY);
	filedes_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filedes_from == -1 || read(filedes_from, buffer, sizeof(buffer) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((bytes = read(filedes_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(filedes_to, &buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(filedes_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes_from);
		exit(100);
	}
	if (close(filedes_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes_to);
		exit(100);
	}
	return (0);
}
