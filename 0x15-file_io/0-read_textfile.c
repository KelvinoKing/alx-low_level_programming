#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * read_textfile - Reads a text file and prints it to the POXIS stdout
 * @filename: pointer to file descriptor
 * @letters: number of bytes to be printed
 *
 * Return: actual num of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes;
	int fd;
	size_t i = 0;
	char *ptr_buff;

	if (filename == NULL)
		return (0);

	ptr_buff = malloc(sizeof(char) * letters);
	if (ptr_buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_bytes = read(fd, ptr_buff, letters);
	if (num_bytes == -1)
		return (0);
	while (i < letters)
	{
		_putchar(ptr_buff[i]);
		i++;
	}
	free(ptr_buff);
	return (num_bytes);
}
