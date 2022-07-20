#include "main.h"
/**
 * read_textfile - reads and prints text file
 * @filename: name of the file
 * @letters: number of letters
 * Return: 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int written;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1 || !filename)
		return (0);
	read(file, buf, letters);

	written = write(1, buf, letters);
	if (written == -1)
		return (0);
	close(file);
	return (written);
}
