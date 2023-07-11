#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Function parameter
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: pointer to file
 * @text_content: text to be appended
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		len = 0;
		text_content = "";
	}
	else
	{
		len = _strlen(text_content);
	}

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
