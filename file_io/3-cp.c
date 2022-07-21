#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: n of args
 * @argv: args
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	copy_text(argv[1], argv[2]);
	exit(0);
}

/*
 * copy_text - copies text
 * @from: copy from
 * @to: copy to
 */

void copy_text(const char *from, const char *to)
{
	int file_from, file_to, r = 1024, w;
	char *count[1024];
	mode_t modsie = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	file_from = open(from, O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
	exit(98);
	}
	file_to = open(to, O_CREAT | O_TRUNC | O_WRONLY | modsie);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	r = read(file_from, count, 1024);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
	w = write(file_to, count, r);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
}
