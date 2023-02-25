#include"main.h"
/**
*print_number -recursive_fun
*@n :the number to be display
*/

void print_number(int n)
{
int x;
x = n;
if (n < 0)
{
x = -x;
_putchar('-');
}
if (x / 10)
{
print_number(x / 10);
}

_putchar('0' + x % 10);


}

