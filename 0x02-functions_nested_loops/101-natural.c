#include<stdio.h>
/**
 * main-prints sum of three and five multipliers between 0 and 1024
 * followed by new line
 * Return: 0 Always
 */
int main(void)
{
int i;
int sum = 0;

for (i = 1; i <= 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum = sum + i;
}
}
printf("%d\n", sum);
return (0);
}
