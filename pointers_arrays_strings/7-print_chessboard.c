#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: columns
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			if (c == 7)
			{
				_putchar(a[r][c]);
				_putchar(10);
			}
			else
				_putchar(a[r][c]);
		}
	}
}
