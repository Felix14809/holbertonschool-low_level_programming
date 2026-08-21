#include "main.h"
/**
 * copy_file - copies buffer into file, creating it if needed
 * @fdfrom: fd of file to copy
 * @file: file to create and write to
 * Return: 0 or error codes
 */
int copy_file(int fdfrom, char *file)
{
	int fdto;
	ssize_t ltrsread = 1, wrresult = 0;
	char buffer[1024];

	fdto = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == -1)
		return (-1);
	
	while (ltrsread > 0)
	{	
		ltrsread = read(fdfrom, buffer, 1024);
		if (ltrsread == -1)
			return (98);
		wrresult = write(fdto, buffer, ltrsread);
		if (wrresult == -1)
			return (-1);
	}
	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdto);
		exit(100);
	}
	return (0);
}
/**
 * main - copies the content of one file into another
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: 0 on success, or the relevant error code
 */
int main(int ac, char **av)
{
	int fd, result;
	
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	result = copy_file(fd, av[2]);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (result == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (0);
}
