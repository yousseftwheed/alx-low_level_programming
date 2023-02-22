#include<stdio.h>
#include"main.h"

/**
*main -entrypoint
*Description: putchar task
*Return: Always 0
*/

int main(void)
{
int i;
char arr[] = "_putchar";
for (i = 0; i < 9; i++)
_putchar(arr[i]);
_putchar('\n');
return (0);
}
