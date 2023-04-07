#include "main.h"

/**
 * create_file - function with two arguments
 * @filename: pointer to string name
 * @text_content: pointer to string contents
 *
 * Description: creates a file
 * Return: 1 on success or -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int file = 0;
	int output = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
	{
		close(file);
		return (1);
	}

	output = write(file, text_content, count);
	if (output == -1 || output != count)
		return (-1);

	close(file);
	return (1);
}
