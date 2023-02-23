#include"main.h"

/**
*print_last_digit -recursive function
*Description: task 7 last
*@x: passed asscii number of the char
*Return: last digit of number
*/
int print_last_digit(int x)
{
if (x / 10 == 0)
{

_putchar(x + '0');
return (1);
}
print_last_digit(x / 10);
return (1);

}
