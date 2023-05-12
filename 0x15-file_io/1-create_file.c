#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates a file with the specified content
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		n_written = write(fd, text_content, len);
		if (n_written == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
