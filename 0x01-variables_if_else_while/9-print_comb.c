#include<stdio.h>
/**
 * main-prints combination of single-digits sorted.
 * followed by newline
 * Return: 0 (success)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
{
	putchar(d);
if (d != 57)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}

