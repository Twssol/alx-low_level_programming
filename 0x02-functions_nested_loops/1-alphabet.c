#include <stdio.h>
#include "main.h"
/**
 * print_alphabet-prints alphabets in lowsercase
 * folowed by new line
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
