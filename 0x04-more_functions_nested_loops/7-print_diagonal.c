#include"main.h"
/**
 * print_diagonal-drow a diagonal line n times
 * @n: N numbers of drown diagnol lines
 */
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
}
