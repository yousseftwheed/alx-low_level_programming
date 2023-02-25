#include"main.h"
/**
 *fizz_buzz - print from 1 to 10
 */
void fizz_buzz()
{
	int i;
	for (i = 1 ;i < 100 ;i++)
	{
		if (  i % 3 == 0 && i%5 == 0 )
			printf("FizzBuzz \t");
		else
			if ( i % 3 == 0 && i % 5 != 0)
				printf("Fizz\t");
			else
				if (i % 5 == 0 && i % 3 != 0 )
					printf("Bizz \t");
				else
					printf("%d \t", i);
	}
printf('\n')
}
