#include"main.h"

/**
*_isalpha -check lower case letters
*Description: isalpha  task
*@c: passed asscii number of the char
*Return: 1 if letter & 0 is not letter
*/

int _isalpha(int c)
{

if ((c >= 97 && c <= 122) || (c <= 65 && c >= 90))
return (1);
else
return (0);
}

