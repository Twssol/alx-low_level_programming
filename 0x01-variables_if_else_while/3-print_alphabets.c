#include <stdio.h>
/**
 * main- A program that print alphabit in upper and lower case
 * Return: 0 (success)
 */
int main(void)
{
char ch, CH;
ch = 'a';
CH = 'A';

while (ch <= 'z')
{
putchar (ch);
ch++;
}
while (CH <= 'Z')
{
putchar (CH);
CH++;
}
putchar ('\n');
return (0);
}
