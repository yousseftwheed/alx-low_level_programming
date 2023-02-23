#include"main.h"

/**
*_isalpha -check lower case letters
*Description: isalpha  task
*@c: passed asscii number of the char
*Return: 1 if letter & 0 is not letter
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
}

if (n < 0)
{
_putchar('-');
return(-1);
}

else
{

_putchar('0');
return(0);
}

}
