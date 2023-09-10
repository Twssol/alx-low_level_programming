#include<stdio.h>
/**
 * main-prints combination of four digits.
 * Return: 0 (success)
 */
int main(void)
{
int x = 48;
int y, z, a;

for (; x <= 57;)
{
for (y = 48; y <= 57; y++)
{
for (z = 48; z <= 57; z++)
{
for (a = 48; a <= 57; a++)
{
if (y < a)
{
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(a);
if (x != 57 || y != 56 || z != 57 || a != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
x++;
}
putchar('\n');
return (0);
}
