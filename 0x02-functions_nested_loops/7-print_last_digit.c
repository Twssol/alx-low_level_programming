#include<stdio.h>
#include"main.h"
/**
 * print_last_digit-prints the last digits
 * @n: the digit
 * Return: int n
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -1 * n;
}
n = n % 10;
printf("%d",n);
return (n);
}
