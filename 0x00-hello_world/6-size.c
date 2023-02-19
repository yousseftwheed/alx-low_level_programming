#include<stdio.h>

/**
*main -entry point
*Description: data type size
*Return: 0 (success)
*/
int main(void)
{
	char c;
	int x;
	long int y;
	long long int z;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int : %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
