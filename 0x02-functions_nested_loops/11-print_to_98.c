#include<stdio.h>
#include"main.h"
/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: the number that will be start counting from
 */
void print_to_98(int n)
{
int i;
if (n < 98)
for (i = n; i < 98; i++)
printf("%d, ", n);
else
for (n; n >= 98; n--)
printf("%d, ", n);
printf("98\n");
}
