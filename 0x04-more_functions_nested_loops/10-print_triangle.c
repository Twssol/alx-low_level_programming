#include"main.h"
/**
 * print_triangle-print tringle using #
 * followed by newline
 * @size: Size of the tringle
 */
void print_triangle(int size)
{
int i, j, s;

for (i = 1; i <= size; i++)
{
for (s = 1; s <= (size - i); s++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
