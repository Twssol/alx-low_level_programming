#include"main.h"
/**
 * puts_half-prints half of a string
 * @str: The string
 */
void puts_half(char *str)
{
	int x = 0;
	int i;

	while (str[x] != '\0')
	{
		x++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (x % 2 == 0)
		{
			if (i == x / 2)
				_putchar(str[i]);
		}
		else
		{
			if (i == ((x - 1) / 2))
				_putchar(str[i]);
		}
	}
}



