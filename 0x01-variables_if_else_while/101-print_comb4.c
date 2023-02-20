#include<stdio.h>

/**
*main -the entry point
*Description: printing numbers
*Return: Always 0
*/
int main(void)
{
int i, j, k;

for (j = 0 ; j <= 9; j++)
{
for (i = 0; i <= 9; i++)
{
for (k = 0; k <= 9; k++)
{
if (k > i && i > j)
{
putchar(j + 48);
putchar(i + 48);
putchar(k + 48);
if (j == 7 && i == 8 && k == 9)
break;
putchar(',');
putchar(' ');

}
}
}
}
putchar('\n');
return (0);
}

