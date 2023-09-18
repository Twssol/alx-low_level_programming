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
	for (i = x / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}



