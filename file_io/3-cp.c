#include "main.h"
/**
 * copy_file - copies text_content into filename, creating it if needed
 * @file: name of the destination file
 * @text_content: buffer of text to write to the file
 * Return: 1 on success, otherwise -1
 */
int copy_file(const char *file, char *text_content)
{
	static int firstwrite = 1;
	int fd, len = 0;
	ssize_t wrresult = 0;

	fd = open(file, O_WRONLY | O_CREAT | (firstwrite ? O_TRUNC : O_APPEND), 0664);
	firstwrite = 0;
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
 * main - copies the content of one file into another
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: 1 on success, or the relevant error code
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
	{	buffer[ltrsread] = '\0';
		result = copy_file(av[2], buffer);
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(98);
		}
	}
	if (ltrsread == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	free(buffer);
	return (0);
}
