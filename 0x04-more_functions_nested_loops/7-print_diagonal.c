#include"main.h"
/**
 * print_diagonal- print diagonal
 * @n: Number of lines
 */
void print_diagonal(int n)
{
int i;
int s;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (s = 1; s <= i; s++)
_putchar(' ');
_putchar(92);
_putchar ('\n');
}
}
else
_putchar('\n');
}
