#include<stdio.h>
#include"main.h"
/**
 * print_sign-check the sign of the number
 * @n: The number will be test
 * Return: 1 if the number is positive, 0 if it's zero, -1 if it's nagative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return ('/');
}
else
-putchar('0');
return (0);
}
