
#include "main.h"
/**
*append_text_to_file - appends text to a file if it exists
*@filename: name of the file
*@text_content: number of characters to read
*Return: 1 on success otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int result, len = 0;
	ssize_t wrresult = 0;

	if (filename == NULL)
		return (-1);
	result = open(filename, O_WRONLY | O_APPEND);
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
