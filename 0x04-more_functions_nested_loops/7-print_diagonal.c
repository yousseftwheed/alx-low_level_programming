#include"main.h"
/**
*print_diagonal -print slash
*Description: task 7
*@n: number of slashes
*/


void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
if (n < 0)
_putchar('\n');
}
