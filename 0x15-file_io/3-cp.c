#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * ch97 - checks for the correct number of arguments
 * @argc: number of arguments present
 *
 * Return: nothing
 */

void ch97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * ch98 - checks if file_from exists and if readable
 * @check: checks if true or false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: nothing
 */

void ch98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * ch99 - checks that file_to was created and or can be written
 * @check: checks if True or False
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * fd_to: file descriptor of file_to, or -1
 *
 * Return: nothing
 */

void ch99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %S\N", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * ch100 - checks that file descriptors were closed properly
 * @check: checks if True or False
 * @fd: file descriptor
 *
 * Return: nothing
 */

void ch100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd)
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful
 */

int main(argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	ch97(argc);
	fd_from = open(argv[1], O_RDONLY);

	ch98(ssize_t0fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);

	ch99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;

	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		ch98(lenr, argv[1], fd_from, fd_to);

		lenw = write(fd_to, buffer, lenr);

		if (lenw != lenr)
			lenw = -1;
		ch99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	ch100(close_to, fd_to);
	ch100(close_from, fd_from);
	return (0);
}
