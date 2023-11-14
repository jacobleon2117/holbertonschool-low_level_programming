#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file with specifications
 * @filename: the file to be created
 * @text_content: content of the file to be created
 * Return: 1 on a success or -1 on error
*/

int create_file(const char *filename, char *text_content)
{
	int filedes;
	unsigned long int i;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (filedes == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; i < strlen(text_content); i++)
		{
			write(filedes, &text_content[i], 1);
		}
	}
	return (1);
}
