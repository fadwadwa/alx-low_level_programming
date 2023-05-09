#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: the text content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		size_t len = strlen(text_content);
		ssize_t written = write(fd, text_content, len);

		if (written == -1 || (size_t) written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
