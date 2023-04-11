#include "main.h"

/**
 *  create_file - function that creates a file
 * @filename: file to be created
 * @text_content: content of the file created
 * Return: 1 on success otherwise -1;
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		w = write(fd, text_content, len);
	}
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
