#include"main.h"
/**
 * count-count numbers digits
 * @n: The number
 * Return: Numbers of digits
 */
int count(int n)
{
	int i = 10;
	int x = 1;

	while (n % i != n)
	{
		x = x + 1;
		i = i * 10;
	}
	return (x);
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
	int i = 100;
	int c, x;
	int y = 1;

	if (n < 0)
		_putchar('-');
	x = _abs(n);
	c = count(n);
	if (c == 1)
		_putchar(x + 48);
	else
	{
		while (c != 0)
		{
			y = y * 10;
			c--;
		}
		_putchar((x / y) + 48);
	while ((c - 2) > 0)
	{
		_putchar(((x / i) % 10) + 48);
		i = i * 10;
		c--;
	}
		_putchar((x % 10) + 48);
	}
}

