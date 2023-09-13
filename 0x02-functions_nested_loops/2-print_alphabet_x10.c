#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10-prints ten times alphabet in lowercase
 * follpwed by new line
 * Return: 0 Success
 */
void print_alphabet_x10(void)
{
	int ch;
	int i;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_printf(ch);
_printf('\n');
}
}
