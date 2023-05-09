#include "main.h"
/**
 * read_textfile - reads a text and prints it to the POSIX standard output
 * @filename: filename
 * @letters: numbers of letters it should read and print
 * Return: void
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t text, output;
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	text = read(file, buffer, letters);
	output = write(STDOUT_FILENO, buffer,text);

	close(file);

	free(buffer);

	return (output);
}
