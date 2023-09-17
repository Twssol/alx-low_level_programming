#include<stdio.h>
/**
 * main-prints numbers from 1 to 100 with fizz,buzz for 3,5 multipules
 * Return: 0 Alwayes
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
		printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
