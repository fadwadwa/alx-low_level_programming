#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file name haha
 * @letters: the num of letters it should read and print
 * Return: the actual num of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num;
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num = read(fd, buffer, letters);
	if (num == -1)
	{
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, num) != num)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (num);
}
