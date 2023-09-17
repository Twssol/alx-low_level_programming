#include"main.h"
/**
 * count-count numbers digits
 * @n: The number
 * Return: Numbers of digits
 */
int count(int n)
{
	if (n > -9 && n < 9)
	{
		return (1);
	}
	else if ((n > -100 && n < -9) || (n > 9 && n < 100))
	{
		return (2);
	}
	else if ((n > -1000 && n < -99) || (n > 99 && n < 1000))
	{
		return (3);
	}
	else if ((n > -10000 && n < -999) || (n > 999 && n > 10000))
	{
		return (4);
	}
return (0);
}



/**
 * print_number-prints numbers usint _putchar function
 * @n: the number will be printed
 */
void print_number(int n)
{
	int i, c;

	c = count(n);
	if (c == 1)
		_putchar(n + 48);
	else
	{
		_putchar((n / 10) + 48);
		for (i = 100; (i / i) <= (c - 2); i = i * 10)
		{
			_putchar(((n / i) % 10) + 48);
		}
		_putchar((n % 10) + 48);
	}
}

