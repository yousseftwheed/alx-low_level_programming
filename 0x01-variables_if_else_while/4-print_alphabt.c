#include<stdio.h>
/**
* main -entry point of programe
* Description : small program
* Return: 0 (Success)
*/

int main(void)
{
	char i;
for (i = 'a'; i <= 'z'; i++)
{
	if (i == 'e' || i == 'q')
	continue;
	putchar(i);
}
putchar('\n');
return (0);
}
