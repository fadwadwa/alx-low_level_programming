#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - creates a fct that creates a file
 * @filename: the filename
 * @text_content: the content
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);
		ssize_t bytes_written = write(fd, text_content, len);

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
		else if ((size_t)bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
