#include "main.h"
/**
*read_textfile - read and prints a file to standard output
*@filename: name of the file
*@letters: number of characters to read
*Return: 0 or the number of letters that could be read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t ltrsread;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0444);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	ltrsread = read(fd, buffer, letters);
	if (ltrsread == -1)
	{
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, ltrsread);
	close(fd);
	free(buffer);
	return (ltrsread);
}
