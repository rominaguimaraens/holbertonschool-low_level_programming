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
	char buf[letters + 1];

	file = open(filename, O_RDONLY);

	if (file == -1 | filename == NULL)
		return (0);
	read(file, buf, letters);
	buf[letters] = '\0';
	
	printf("%s\n", buf);

}
