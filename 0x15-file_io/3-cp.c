#include "main.h"

/**
 * error_exit - Prints an error message to standard error and exits.
 * @message: The format string for the error message
 * @file: The file name associated with the error
 * @fd: The file descriptor to be closed before exiting
 * @status: The exit status code
 * Return: 0
 */
void error_exit(const char *message, const char *file, int fd, int status)
{
	dprintf(STDERR_FILENO, message, file);
	if (fd != -1)
		close(fd);
	exit(status);
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: number argument
 * @argv: arguments list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int num1 = 1024, num2 = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit("Error: Can't read from file %s\n", argv[1], -1, 98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit("Error: Can't write to %s\n", argv[2], file_from, 99);
	while (num1 == 1024)
	{
		num1 = read(file_from, buf, 1024);
		if (num1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num2 = write(file_to, buf, num1);
		if (num2 < num1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file_from) == -1)
		error_exit("Error: Can't close fd %d\n", argv[1], file_from, 100);
	if (close(file_to) == -1)
		error_exit("Error: Can't close fd %d\n", argv[2], -1, 100);

	return (0);
}
