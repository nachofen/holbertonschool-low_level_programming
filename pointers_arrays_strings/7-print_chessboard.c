#include "main.h"
/**
 * print_chessboard - a function that print a string in reverse
 * @a: the char pointer to the array
 */
void print_chessboard(char (*a)[8])
{
	int contfil = 0, contcol = 0;

	for (; contfil < 8; contfil++)
	{

		for (contcol = 0; contcol < 8; contcol++)
		{
			_putchar(a[contfil][contcol]);
		}
		_putchar('\n');
	}
}
