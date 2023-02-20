#include<stdio.h>

/**
*main -the entry point
*Description: printing numbers
*Return: Always 0
*/
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(48 + i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
