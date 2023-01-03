#include "main.h"
/**
 * print_chessboard - Function that prints chessboard
 * @a: Pointer to a character array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\0');
	}
}
