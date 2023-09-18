#include"main.h"
/**
 * puts_half-prints half of a string
 * @str: The string
 */
void puts_half(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	x++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}



