#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters we should read
 * Return: number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(fd, buff, letters);
	if (rd == -1)
	{	free(buff);
		return (0);
	}
	wd = write(STDOUT_FILENO, buff, rd);
	if (wd == -1)
	{
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (wd);
}
