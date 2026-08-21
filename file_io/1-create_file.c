#include "main.h"
/**
*create_file - creates a file if it doesnt exist and writes to it
*@filename: name of the file
*@text_content: number of characters to read
*Return: 1 on success otherwise -1
*/
int create_file(const char *filename, char *text_content)
{
	int result, len = 0;
	ssize_t wrresult = 0;


	result = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (result == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		wrresult = write(result, text_content, len);
	}
	if (wrresult == -1)
		return (-1);
	close(result);
	return (1);
}
