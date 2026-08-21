#include "main.h"
/**
*copy_file - copys a file if it doesnt exist and writes to it
*@filename: name of the file
*@text_content: number of characters to read
*Return: 1 on success otherwise -1
*/
int copy_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wrresult = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0664);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		wrresult = write(fd, text_content, len);
		if (wrresult == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
/**
*cpy - copies content of one file to another
*@ac: argument count
*@av: array of pointer to passed files
*Return: 1 or error code
*/
int main(int ac, char **av)
{
	int fd, result;
	ssize_t ltrsread;
	char *buffer;

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
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	while ((ltrsread = read(fd, buffer, 1024)) > 0)
	{
		if (ltrsread == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[2]);
			exit(98);
		}
		result = copy_file(av[2], buffer);
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(98);
		}
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	free(buffer);
	return (1);
}
