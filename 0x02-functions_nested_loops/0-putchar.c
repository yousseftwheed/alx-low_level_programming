#include <stdio.h>
#include "main.h"
/**
*main -the entry point
*Description: Print useing _putchar
*Return: Always 0
*/
int main(void)
{
int i;
char ar[] = "_putchar\n";
for (i = 0; i < 10; i++)
_putchar(ar[i]);

return (0);
}
