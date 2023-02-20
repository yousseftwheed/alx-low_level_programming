#include<stdio.h>

/**
*main -the entry point
*Description: printing numbers
*Return: Always 0
*/
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (i < j)
{
putchar(i + 48);
putchar(j + 48);
if (i == 8)
break;

putchar(',');
putchar(' ');
}

}

}
putchar('\n');
return (0);
}
