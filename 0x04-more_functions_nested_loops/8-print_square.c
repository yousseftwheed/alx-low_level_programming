#include"main.h"
/**
*print_squares -print slash
*Description: task 7
*@size: number of #
*/

void print_square(int size)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
