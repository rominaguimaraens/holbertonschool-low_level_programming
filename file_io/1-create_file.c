#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of new file
 * @text_content: string to write in file
 * Return: 1 (success) -1 (faliure)
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
		write(file, text_content, strlen(text_content));
	close(file);
	return (1);
}
