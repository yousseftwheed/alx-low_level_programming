#include<stdio.h>

/**
*main -the entry point
*Description: printing numbers
*Return: Always 0
*/
int main(void)
{
int i, j, k;
 
 for(j = 0 ; j <= 9; j++)
{
for(i = 0; i <= 9; i++)
{
for(k = 0; k <= 9; k++)
{
if (j < i && k < j)
{
putchar(k + 48);
putchar(j + 48);
putchar(i + 48);
if (i == 9 && k == 7 && j == 8)
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

