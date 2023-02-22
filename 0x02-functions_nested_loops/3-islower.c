#include"main.h"

/**
*_islower -check lower case letters
*Description: putchar task
*@c: passed asscii number of the char
*Return: 1 if lower & 0 is upper
*/

int _islower(int c)
{
if (c <= 97 && c < 122)
return (1);
else
return (0);
}
