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
		n = (n * -1) % 10;
		_putchar(n + 48);
	}
	else
		if (n  >= 0)
		{
			n = n % 10;
			_putchar(n + 48);
		}
	return (n);
}
