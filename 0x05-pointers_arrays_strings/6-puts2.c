#include"main.h"
/**
 * puts2-prints other characters, starting with the first character
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
}
