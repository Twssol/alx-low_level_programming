#include "main.h"
/**
 * main-prints putchar
 * followed by a newline
 * Return: 0 (success)
 */
int main(void)
{
char str[] = "_putchar";
int ch;

for (ch = 0; ch < 8; ch++)
{
	_putchar(str[ch]);
}
_putchar('\n');
	return (0);
}
