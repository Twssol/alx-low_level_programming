#include"main.h"
/**
 * print_diagonal- print diagonal
 * @n: Number of lines
 */
void print_diagonal(int n)
{
	int i = 1;
	int s = 1;

	if (n > 0)
	{
		while (i <= n)
		{
		while (s <= i)
		{	
			_putchar(' ');
			s++;
		}
			_putchar(92);
		i++;
		}
		_putchar ('\n');
	}
else
_putchar('\n');
}
