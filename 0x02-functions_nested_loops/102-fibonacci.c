#include<stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 ALways
 */
int main(void)
{
int i;
long long int x = 0;
long long int sum  = 1;

for (i = 0; i < 25; i++)
{
x = x + sum;
sum = sum + x;
printf("%llu, %llu", x, sum);
if (sum != 20365011074)
printf(", ");
}
printf("\n");
return (0);
}
