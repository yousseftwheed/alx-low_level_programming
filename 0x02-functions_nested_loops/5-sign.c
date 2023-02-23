#include"main.h"

/**
*print_sign -sign of numbers checked here
*Description: print numbers sign
*@n: the number to check
*Return: 1 if +ve & 0 if zero  & -1 in -ve
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

if (n < 0)
{
_putchar('-');
return (-1);
}

else
{

_putchar('0');
return (0);
}

}
