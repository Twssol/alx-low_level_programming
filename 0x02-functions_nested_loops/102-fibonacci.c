#include<stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 ALways
 */
int main(void)
{
int i;
int sum  = 0;

printf("%d, %d, ", 1, 2);
for (i = 1; i <= 50; i++)
{
sum = sum + i;
if (sum / 10 == 1 || sum / 10 == 2)
{
printf("%d", sum);
if (sum != 28)
printf(", ");
}
}
printf("\n");
return (0);
}
