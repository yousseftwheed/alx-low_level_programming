#include"main.h"

/**
*_isupper -check uper case letters
*Description: putchar task
*@c: passed asscii number of the char
*Return: 1 ifupper & 0 is other
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
