#include"main.h"
/**
 * more_numbers- prints 10 times the numbers, from 0 to 14
 * followed by new line
 */
void more_numbers(void)
{
int i, c;

for (i = 0; i <= 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
_putchar(49);
_putchar(c + 48);
}
_putchar('\n');
}
}

