#include"main.h"
/**
 * puts_half-prints half of a string
 * @str: The string
 */
void puts_half(char *str)
{
	int x = 0;
	int i, n;

	while (str[x] != '\0')
	{
		x++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (x % 2 == 0)
		{
			n = x / 2;
			while (i >= n)
				_putchar(str[i]);
		}
		else
		{
			n = (x - 1) / 2;
			while (i >= n)
				_putchar(str[i]);
		}
	}
_putchar('\n');
}



