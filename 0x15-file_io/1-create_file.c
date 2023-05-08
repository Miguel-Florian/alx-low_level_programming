#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: text insisde the file
 * Return: void
 */
int create_file(const char *filename, char *text_content)
{
	int file, text;
	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";


	text = write(file, text_content, strlen(text_content);
	if (text == -1)
		return (-1);
	
	close(file);

	return(-1);
}
