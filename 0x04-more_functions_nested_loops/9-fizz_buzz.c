#include<stdio.h>
/**
 * main-prints num from 1 to 100 with fizz , buzz petern
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz ");
		else if (i % 5 == 0)
		printf("Buzz ");
		else if (i % 3 == 0)
		printf("Fizz ");
		else
		printf("%d ", i);
	}
	printf("\n");
}
