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
	putchar(i);
for (i = 'A'; i <= 'Z'; i++)
	putchar(i);

putchar('\n');
return (0);
}
