#include <stdio.h>
/**
 * main-finds and prints the largest prime factor of the number 612852475143
 * Return: 0 Alwayes
 */
int main(void)
{
long int n, x = 612852475143;

for (n = 3; n < 782849; n = n + 2)
{
	while ((x % n) == 0 && (n != x))
	{
		x = x / n;
	}
}
printf("%ld\n", x);
return (0);
}
