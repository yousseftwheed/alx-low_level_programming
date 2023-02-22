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
char arr[] = "_putchar\n";
for (i = 0; i < 10; i++)
_putchar(arr[i]);

return (0);
}
