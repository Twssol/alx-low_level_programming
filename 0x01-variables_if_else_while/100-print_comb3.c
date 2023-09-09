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

	for (x = 48; x <= 56; x++)
{
	for (y = 49; y <= 57; y++)
{
	if (y > x)
{
	putchar(x);
	putchar(y);
if (x != 56 || y != 57)
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

