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
	if (x % 2 == 0)
	{
		n = x / 2;
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
	else
	{
		n = (x - 1) / 2;
		for (i = n; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}



