#include "main.h"

void openFile(const char *file_from, const char *file_to);
void copyText(int fdFrom, int fdTo, char *p, const char *f1, const char *f2);
/**
 * main - Entry point of programe
 * @argc: atgument count
 * @argv: array of arguments
 *
 * Return: int
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		write(STDOUT_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}

	openFile(argv[1], argv[2]);

	return (0);
}

/**
 * openFile - opens the specified files
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 on success or -1 on failure
 */
void openFile(const char *file_from, const char *file_to)
{
	int fdFrom, fdTo;
	char *ptr_buff;
	int fdClose1, fdClose2;

	fdFrom = open(file_from, O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fdTo = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	ptr_buff = malloc(sizeof(char) * 1024);
	if (ptr_buff == NULL)
	{
		close(fdFrom);
		close(fdTo);
		return;
	}

	copyText(fdFrom, fdTo, ptr_buff, file_from, file_to);
	fdClose1 = close(fdFrom);
	if (fdClose1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(100);
	}
	fdClose2 = close(fdTo);
	if (fdClose2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdTo);
		exit(100);
	}
}

/**
 * copyText - copy text from one file to another
 * @fdFrom: file descriptor to file containig content
 * @fdTo: file descriptor to file being writen on
 * @p: pointer to buffer
 * @f1: name of file with content
 * @f2: name of file receiving content
 *
 * Return: int
 */
void copyText(int fdFrom, int fdTo, char *p, const char *f1, const char *f2)
{
	int num_bytes, j;

	num_bytes = -1;
	j = -1;

	while (num_bytes != 0)
	{
		num_bytes = read(fdFrom, p, 1024);
		if (num_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
			free(p);
			exit(98);
		}

		j = write(fdTo, p, num_bytes);
		if (j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f2);
			free(p);
			exit(99);
		}
	}
}
