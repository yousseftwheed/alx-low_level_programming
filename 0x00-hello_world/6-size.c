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
printf("Size of a char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(x));
printf("Size of a long int : %zu byte(s)\n", sizeof(y));
printf("Size of a long long int: %zu byte(s)\n", sizeof(z));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
