#include "main.h"
/**
 * print_chessboard - Prints a chess board.
 * @a: The number of rows.
 */
void print_chessboard(char (*a)[8])
{
int index1;
int index2;
for (index1 = 0; a[index1][7]; index1++)
{
for (index2 = 0; index2 < 8; index2++)
_putchar(a[index1][index2]);
_putchar('\n');
}
}
