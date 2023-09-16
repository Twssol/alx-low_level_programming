#include"main.h"
/**
 * more_numbers-prints numbers from 1 to 14 ten times
 * followed by new line
 */
void more_numbers(void)
{
int i;
int c;
int num;

for (i = 0; i <= 10; i++)
{
for (c = 0 ; c <= 14; c++)
{
if (c > 9)
{
	_putchar((c / 10) + 48);
	num = c / 10;
else
_putchar(num);
}
_putchar('\n');
}
}
