#include "main.h"

/**
 * read_textfile - function with two arguments
 * @filename: name of the file
 * @letters: number of letters
 *
 * Description: reads a text file and prints
 * Return: 0 if filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	int reader = 0;
	int output = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	reader = read(file, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, reader);
	if (output == -1 || output != reader)
	{
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (output);
}
