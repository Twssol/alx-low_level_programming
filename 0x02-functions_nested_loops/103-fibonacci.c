#include<stdio.h>
/**
 * main- prints the sum of the even-valued terms
 * Return: 0 ALways
 */
int main(void)
{
int i;
long  int x = 0;
long int sum  = 2;

for (i = 0; i < 15; i++)
{
x = x + sum;
sum = sum + x;
printf("%ld, %ld", x, sum);
if (sum != 2692538)
printf(", ");
}
printf("\n");
return (0);
}
