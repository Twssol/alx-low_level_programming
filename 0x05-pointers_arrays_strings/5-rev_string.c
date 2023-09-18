#include"main.h"
/**
 * rev_string-prints a string, in reverse
 * @s: The string
 */
void rev_string(char *s)
{
	int i = 0;
	int x, y;

	while (s[i])
	{
		i++;
	}
	for (x = 0; x <= i / 2; x++)
	{
	y = s[x];
	s[x] = s[i - x];
	s[i - x] = y;
	}
}
