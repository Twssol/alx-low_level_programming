#include<stdio.h>
/**
 * main-prints combination of three digits.
 * Return: 0 (success)
 */
int main(void)
{
	int x = 48;
	int y, z;

for (; x <= 55;)
{
for (y = 49; y <= 56; y++)
{
for (z = 50; z <= 57; z++)
{
	if (x < y || y < z)
{
	putchar(x);
	putchar(y);
putchar(z);
if (x != 55 || y != 56 || z != 57)
{
	putchar(',');
	putchar(' ');
}
}
}
}
x++;
}
putchar('\n');
return (0);
}
