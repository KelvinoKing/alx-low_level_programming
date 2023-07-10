#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POXIS stdout
 * @filename: pointer to file descriptor
 * @letters: number of bytes to be printed
 *
 * Return: actual num of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes, print_chars;
	int fd;
	char *ptr_buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr_buff = malloc(sizeof(char) * letters);
	if (ptr_buff == NULL)
		return (0);

	num_bytes = read(fd, ptr_buff, letters);
	if (num_bytes == -1)
	{
		free(ptr_buff);
		return (0);
	}
	close(fd);

	print_chars = write(STDOUT_FILENO, ptr_buff, num_bytes);
	if (print_chars == -1)
	{
		free(ptr_buff);
		return (0);
	}

	free(ptr_buff);
	return (num_bytes);
}
