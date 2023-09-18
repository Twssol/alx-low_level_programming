#include"main.h"
/**
 * rev_string-prints a string, in reverse
 * @s: The string
 */
void rev_string(char *s)
{
	int i;
	int x, y;

	for (i = 0;s[i] != '\0'; i++)
		;
	for (x = 0; x <= i / 2; x++)
	{
	if (x != 5)
	{
		y = s[x];
		s[x] = s[i - 1 - x];
		s[i - 1 - x] = y;
	}
	}
}
