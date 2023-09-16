#include"main.h"
/**
 * more_numbers-prints numbers from 1 to 14 ten times
 * followed by new line
 */
void more_numbers(void)
{
int i;
int c;

for (i = 0; i <= 10; i++)
{
for (c = 0 ; c <= 14; c++)
{
if (c > 9)
{
_putchar((c / 10) + 48);
_putchar((c % 10) + 48);
}
else
_putchar((c % 10) + 48);
}
_putchar('\n');
}
}
