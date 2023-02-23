#include"main.h"

/**
*_isdigit -check lower case letters
*Description: c task
*@c: passed asscii number of the char
*Return: 1 if digit & 0 is not
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
