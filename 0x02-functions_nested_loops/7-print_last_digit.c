#include"main.h"

/**
*print_last_digit -recursive function
*Description: task 7 last
*@x: passed asscii number of the char
*Return: last digit of number
*/
int print_last_digit(int x)

{
int n;
n = x;
	if (n < 0)
	{
		n = n * -1;
		_putchar(n % 10 + '0');
		n = n % 10;
	}
	else
		if (n == 0)
		{
			_putchar('0');
			n = n % 10;
		}
	else
		if (n > 0)
		{
			_putchar(n % 10 + '0');
			n = n % 10;
		}	
return (n);
}
