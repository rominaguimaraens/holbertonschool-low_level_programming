#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: content to append
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content)
		write(file, text_content, strlen(text_content));
	close(file);
	return (1);
}
