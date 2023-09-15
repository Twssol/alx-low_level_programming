#include"main.h"
/**
 * print_diagonal- print diagonal
 * @n: Number of lines
 */
void print_diagonal(int n)
{
	int i = 0;
	int s = 0;

	if (n > 0)
	{
		while (i < n)
		{
		while (s <= i)
		{
			_putchar(' ');
			s++;
		}
			_putchar(92);
		i++;
		_putchar ('\n');
		}
	}
else
_putchar('\n');
}
