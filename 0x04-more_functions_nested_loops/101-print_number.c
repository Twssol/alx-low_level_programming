#include"main.h"
/**
 * count-count numbers digits
 * @n: The number
 * Return: Numbers of digits
 */
int count(int n)
{
	if (n > -9 && n < 9)
		return (1);
	else if ((n > -100 && n < -9) || (n > 9 && n < 100))
		return (2);
	else if ((n > -1000 && n < -99) || (n > 99 && n < 1000))
		return (3);
	else if ((n > -10000 && n < -999) || (n > 999 && n > 10000))
		return (4);
	else if ((n > -100000 && n < -9999) || (n > 9999 && n < 100000))
		return (5);
	else if ((n > -1000000 && n < -99999) || (n > 99999 && n < 1000000))
		return (6);
	else if ((n > -10000000 && n < -999999) || (n > 999999 && n < 10000000))
		return (7);
	else if ((n > -100000000 && n < -9999999) || (n > 9999999 && n < 100000000))
		return (8);
	else if (n > -1000000000 && n < -99999999)
		return (9);
	else if (n > 99999999 && n < 1000000000)
		return (9);
	else if (n > -10000000000 && n < -999999999)
		return (10);
	else if (n > 999999999 && n < 10000000000)
		return (10);
return (0);
}

/**
 * _abs-prints the absolute value of intiger
 * @n: The intiger that it's absolute value will be calculate
 * Return: the absolute value of n
 */
int _abs(int n)
{
if (n < 0)
{
n = -1 * n;
}
return (n);
}

/**
 * print_number-prints numbers usint _putchar function
 * @n: the number will be printed
 */
void print_number(int n)
{
	int i, c;

	if (n > 0)
		_putchar('-');
	_abs(n);
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

