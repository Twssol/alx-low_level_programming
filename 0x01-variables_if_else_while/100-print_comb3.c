#include<stdio.h>
/**
 * main-prints compinations of douple-digits.
 * followed by new line.
 * Return: 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
{
	for (y = 49; y <= 57; y++)
{
	if (x != y)
{
	putchar(x);
	putchar(y);
if (x != 57 || y != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

